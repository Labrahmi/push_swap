/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visual.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:13:18 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/28 17:16:23 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_visual_stacks(t_stack *a, t_stack *b)
{
	t_node *node;

	ft_printf("------------------------------------------\n");
	ft_printf("A: ");
	node = a->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->content);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	// - - - - - - - -
	ft_printf("\nB: ");
	node = b->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->content);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	ft_printf("\n------------------------------------------\n");
}
