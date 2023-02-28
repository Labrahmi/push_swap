/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:15:55 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/28 17:16:08 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_push_all_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	chunk_count;
	int	size_of_a;
	int	chunk;
	int	i;

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
}
