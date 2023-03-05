/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:16:39 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:28:50 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_push_b(t_stack *a, t_stack *b, char *message)
{
	t_node	*b_old_top;

	if (a->top)
	{
		if (b->top)
		{
			b_old_top = b->top;
			b->top = a->top;
			a->top = a->top->next;
			b->top->next = b_old_top;
		}
		else
		{
			b->top = a->top;
			a->top = a->top->next;
			b->top->next = NULL;
		}
		if (message)
		{
			ft_putstr_fd(message, 1);
			ft_putstr_fd("\n", 1);
		}
	}
}
