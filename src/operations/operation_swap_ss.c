/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap_ss.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:13:21 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:29:04 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_ss(t_stack *stack_a, t_stack *stack_b, char *message)
{
	ft_swap(stack_a, NULL);
	ft_swap(stack_b, NULL);
	ft_putstr_fd(message, 1);
	ft_putstr_fd("\n", 1);
}
