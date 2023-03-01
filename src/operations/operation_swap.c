/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:19 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/01 20:37:09 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(t_stack *stack, char *message)
{
	t_node	*old_top;

	if (stack->top && stack->top->next)
	{
		old_top = stack->top;
		stack->top = stack->top->next;
		old_top->next = stack->top->next;
		stack->top->next = old_top;
		if (message)
		{
			ft_putstr_fd(message, 1);
			ft_putstr_fd("\n", 1);
		}
	}
}
