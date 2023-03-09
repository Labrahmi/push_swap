/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vis_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:30:48 by macbook           #+#    #+#             */
/*   Updated: 2023/03/10 00:30:52 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_vis_stack(char *name, t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	ft_printf("[%s] | TOP : ", name);
	while (node)
	{
		ft_printf("%d ", node->content);
		node = node->next;
	}
	ft_printf("|\n");
}
