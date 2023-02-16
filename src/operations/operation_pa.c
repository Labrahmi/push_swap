/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:06:58 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 15:22:04 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top > -1)
	{
		stack_a->top++;
		stack_a->array[stack_a->top] = stack_b->array[stack_b->top];
		stack_b->top--;
		ft_printf("pa\n");
	}
}
