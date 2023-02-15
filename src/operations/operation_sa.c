/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:19 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/15 22:45:02 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack *stack)
{
	int	swap;

	if (stack->top > 1 && stack)
	{
		swap = stack->array[stack->top];
		stack->array[stack->top] = stack->array[stack->top - 1];
		stack->array[stack->top - 1] = swap;
	}
}
