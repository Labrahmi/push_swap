/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:40:59 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:29:01 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate(t_stack *stack, char *message)
{
	t_node	*old_top;
	t_node	*temp;

	if (stack->top && stack->top->next)
	{
		old_top = stack->top;
		stack->top = stack->top->next;
		temp = stack->top;
		while (temp->next)
			temp = temp->next;
		temp->next = old_top;
		old_top->next = NULL;
		if (message)
		{
			ft_putstr_fd(message, 1);
			ft_putstr_fd("\n", 1);
		}
	}
}
