/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:49:03 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 19:02:04 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_stack *stack)
{
	int	i;
	int	swap;

	if (stack->top > -1)
	{
		i = 0;
		while (i < (stack->top))
		{
			swap = stack->array[i];
			stack->array[i] = stack->array[i + 1];
			stack->array[i + 1] = swap;
			i++;
		}
		ft_printf("rra\n");
	}
}
