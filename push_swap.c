/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/01 12:20:45 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_stack_size(t_stack stack_a)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = stack_a.top;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	ft_get_real_position(t_stack *stack_b, int curr)
{
	t_node	*temp;
	int		i;

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

int	ft_set_size(int size_of_stack)
{
	int	d;

	d = 1;
	if (size_of_stack >= 10)
		d = 2;
	if (size_of_stack >= 60)
		d = 3;
	if (size_of_stack >= 100)
		d = 5;
	if (size_of_stack >= 500)
		d = 10;
	return (size_of_stack / d);
}

void	ft_sort_small(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_stack_size(*stack_a) <= 3)
	{
		if (ft_stack_size(*stack_a) == 2)
			ft_swap(stack_a, "sa");
		else
		{
			if (stack_a->top->position == 0)
			{
				ft_push_b(stack_a, stack_b, "pb");
				ft_rotate(stack_a, "ra");
				ft_push_a(stack_a, stack_b, "pa");
			}
			else if (stack_a->top->position == 1)
			{
				if (stack_a->top->next->position == 2)
					ft_rotate_rev(stack_a, "rra");
				else
					ft_swap(stack_a, "sa");
			}
			else if (stack_a->top->position == 2)
			{
				if (stack_a->top->next->position == 1)
				{
					ft_swap(stack_a, "sa");
					ft_rotate_rev(stack_a, "rra");
				}
				else
					ft_rotate(stack_a, "ra");
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (argc > 1)
	{
		ft_init_stack(stack_a);
		ft_init_stack(stack_b);
		ft_fill_stack(stack_a, argv);
		if (ft_stack_size(*stack_a) == 1)
			return (0);
		if (ft_stack_size(*stack_a) <= 5)
			ft_sort_small(stack_a, stack_b);
		else
		{
			ft_push_all_to_b(stack_a, stack_b);
			ft_push_all_to_a(stack_a, stack_b);
		}
	}
	return (0);
}
