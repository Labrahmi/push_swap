/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:15:18 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:28:44 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_push_all_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;
	int	size_of_b;

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
