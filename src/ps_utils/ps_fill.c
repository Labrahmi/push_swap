/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:17:06 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 20:03:29 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->top = -1;
}

void	ft_fill_stack(t_stack *stack, char **argv)
{
	int		*array;
	int		tot;
	int		i;

	i = 0;
	array = ft_check_args(argv, &tot);
	while (tot > 0)
	{
		stack->top++;
		stack->array[stack->top] = array[tot - 1];
		tot--;
	}
}
