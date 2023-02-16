/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:16:39 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 15:21:20 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top > -1)
	{
		stack_b->top++;
		stack_b->array[stack_b->top] = stack_a->array[stack_a->top];
		stack_a->top--;
		ft_printf("pb\n");
	}
}
