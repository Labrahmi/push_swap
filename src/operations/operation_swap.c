/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:19 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/25 18:41:17 by ylabrahm         ###   ########.fr       */
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
		ft_printf("%s\n", message);
	}
}
