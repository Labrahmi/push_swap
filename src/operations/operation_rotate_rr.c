/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate_rr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:06:29 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/09 00:33:21 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate_rr(t_stack *stack_a, t_stack *stack_b, char *message)
{
	ft_rotate(stack_a, NULL);
	ft_rotate(stack_b, NULL);
	if (message)
	{
		ft_putstr_fd(message, 1);
		ft_putstr_fd("\n", 1);
	}
}
