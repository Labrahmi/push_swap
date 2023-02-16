/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:57:52 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 12:58:03 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sb(t_stack *stack)
{
	int	swap;

	if (stack->top > 1 && stack)
	{
		swap = stack->array[stack->top];
		stack->array[stack->top] = stack->array[stack->top - 1];
		stack->array[stack->top - 1] = swap;
		ft_printf("sb\n");
	}
}
