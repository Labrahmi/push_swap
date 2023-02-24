/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:17:06 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/24 08:38:19 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->top = NULL;
}

int	*ft_coppy(int *src, int size)
{
	int	i;
	int	*dst;

	dst = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}

void	ft_bubble_sort(int *array, int tot)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (tot - 1))
	{
		j = 0;
		while (j < (tot - i - 1))
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_push_node_to_stack(int number, t_stack *stack)
{
	t_node	*node;
	int		i;

	node = (t_node *) malloc(sizeof(t_node));
	node->content = number;
	node->next = NULL;
	i = 0;
	node->position = 0;
	if (stack->top)
		node->next = stack->top;
	stack->top = node;
}

void	ft_fill_position(t_stack *stack, int *array, int tot)
{
	t_node	*node;
	int		i;

	if (stack->top)
	{
		node = stack->top;
		while (node)
		{
			i = 0;
			while (i < tot)
			{
				if (array[i] == node->content)
					node->position = i;
				i++;
			}
			node = node->next;
		}
	}
}

void ft_fill_stack(t_stack *stack, char **argv)
{
	int	*array;
	int	tot;
	int	i;

	array = ft_check_args(argv, &tot);
	i = (tot - 1);
	while (i >= 0)
		ft_push_node_to_stack(array[i--], stack);
	ft_bubble_sort(array, tot);
	ft_fill_position(stack, array, tot);
	
	t_node	*node;
	
	node = stack->top;
	while (node)
	{
		ft_printf("(%d) -> '%d'\n", node->position, node->content);
		usleep(500000);
		node = node->next;
	}
}
