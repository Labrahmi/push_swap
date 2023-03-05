/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate_rev.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:21:59 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:28:57 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate_rev(t_stack *stack, char *message)
{
	t_node	*temp;
	t_node	*old_top;

	if (stack->top && stack->top->next)
	{
		temp = stack->top;
		while (temp->next->next)
			temp = temp->next;
		old_top = stack->top;
		stack->top = temp->next;
		stack->top->next = old_top;
		temp->next = NULL;
		if (message)
		{
			ft_putstr_fd(message, 1);
			ft_putstr_fd("\n", 1);
		}
	}
}
