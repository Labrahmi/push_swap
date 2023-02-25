/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:16:39 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/25 20:26:47 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_push_a(t_stack *b, t_stack *a, char *message)
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
		ft_printf("%s\n", message);
	}
}
