/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:38:32 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 18:52:20 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rb(t_stack *stack)
{
	int	i;
	int	swap;

	if (stack->top > -1)
	{
		i = (stack->top - 1);
		while (i >= 0)
		{
			swap = stack->array[i + 1];
			stack->array[i + 1] = stack->array[i];
			stack->array[i] = swap;
			i--;
		}
		ft_printf("rb\n");
	}
}
