/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/27 12:39:01 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_visual_stacks(t_stack *a, t_stack *b)
{
	t_node *node;

	ft_printf("------------------------------------------\n");
	ft_printf("A: ");
	node = a->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->position);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	// - - - - - - - -
	ft_printf("\nB: ");
	node = b->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->position);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	ft_printf("\n------------------------------------------\n");
	// sleep(1);
}

int ft_stack_size(t_stack stack_a)
{
	t_node *temp;
	int i;

	i = 0;
	temp = stack_a.top;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int ft_get_real_position(t_stack *stack_b, int curr)
{
	t_node *temp;
	int i;

	i = 0;
	temp = stack_b->top;
	while (temp)
	{
		if (temp->position == curr)
			return (i);
		temp = temp->next;
		i++;
	}
	return (0);
}

int	ft_set_size(int	size_of_stack)
{
	int	d;

	d = 1;
	if (size_of_stack >= 10)
		d = 2;
	if (size_of_stack >= 60)
		d = 3;
	if (size_of_stack >= 80)
		d = 4;
	if (size_of_stack >= 100)
		d = 5;
	if (size_of_stack >= 200)
		d = 6;
	if (size_of_stack >= 500)
		d = 8;
	return (size_of_stack / d);
}

int main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (argc > 1)
	{
		ft_init_stack(stack_a);
		ft_init_stack(stack_b);
		ft_fill_stack(stack_a, argv);

		{
			int size_of_a;
			int size_of_b;
			int chunk;
			int chunk_count;
			int i;

			size_of_a = ft_stack_size(*stack_a);
			chunk = ft_set_size(size_of_a);
			chunk_count = chunk;
			i = 0;
			while (stack_a->top)
			{
				while (stack_a->top->position >= chunk)
				{
					ft_rotate(stack_a, "ra");
					if (i == chunk)
						chunk += chunk_count;
				}
				ft_push_b(stack_a, stack_b, "pb");
				if (stack_b->top->position <= chunk - (chunk_count / 2))
					ft_rotate(stack_b, "rb");
				i++;
			}
			int pos;
			size_of_b = ft_stack_size(*stack_b);
			while (stack_b->top)
			{
				while (stack_b->top->position != (size_of_b - 1))
				{
					pos = ft_get_real_position(stack_b, (size_of_b - 1));
					if (pos > (size_of_b / 2))
						ft_rotate_rev(stack_b, "rrb");
					else
						ft_rotate(stack_b, "rb");
				}
				ft_push_a(stack_a, stack_b, "pa");
				size_of_b--;
			}
		}
	}
	return (0);
}
