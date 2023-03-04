/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:13:43 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/04 15:16:17 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*get_last_node(t_stack *stack_a)
{
	t_node	*temp_node;

	temp_node = stack_a->top;
	while (temp_node->next)
		temp_node = temp_node->next;
	return (temp_node);
}

t_node	*get_large_node(t_stack *stack_a)
{
	t_node	*large_pos;
	t_node	*temp_node;

	large_pos = stack_a->top;
	temp_node = stack_a->top;
	while (temp_node)
	{
		if (temp_node->position > large_pos->position)
			large_pos = temp_node;
		temp_node = temp_node->next;
	}
	return (large_pos);
}

int	ft_set_size(int size_of_stack)
{
	int	d;

	d = 1;
	if (size_of_stack >= 10)
		d = 4;
	if (size_of_stack >= 60)
		d = 6;
	if (size_of_stack >= 100)
		d = 10;
	if (size_of_stack >= 500)
		d = 20;
	return (size_of_stack / d);
}

void	ft_sort_small(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_stack_size(*stack_a) <= 3)
		ft_sort_three(stack_a, ft_stack_size(*stack_a));
	else
		ft_sort_five(stack_a, stack_b);
}
