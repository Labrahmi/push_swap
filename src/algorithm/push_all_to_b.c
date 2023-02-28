/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:15:55 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/28 19:37:43 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_last_one(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*last_of_a;

	if (stack_a->top && stack_b->top)
	{
		last_of_a = stack_a->top;
		while (last_of_a->next)
			last_of_a = last_of_a->next;
		if ((stack_b->top->position + 1) == (last_of_a->position))
			return (0);
	}
	return (1);
}

void	ft_help_pb(t_stack *stack_a, t_stack *stack_b, int c, int ck)
{
	int	t_b_pos;

	ft_push_b(stack_a, stack_b, "pb");
	if (stack_a->top)
	{
		t_b_pos = stack_b->top->position;
		if ((t_b_pos <= c - (ck / 2)) && (stack_a->top->position >= c))
			ft_rotate_rr(stack_a, stack_b, "rr");
		else if (stack_b->top->position <= c - (ck / 2))
			ft_rotate(stack_b, "rb");
	}
}

void	ft_push_all_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	ck;
	int	size_of_a;
	int	c;
	int	i;

	size_of_a = ft_stack_size(*stack_a);
	c = ft_set_size(size_of_a);
	ck = c;
	i = 0;
	while (stack_a->top)
	{
		if (stack_a->top->position >= c)
		{
			ft_rotate(stack_a, "ra");
			if (i == c)
				c += ck;
		}
		else
		{
			ft_help_pb(stack_a, stack_b, c, ck);
			i++;
		}
	}
}
