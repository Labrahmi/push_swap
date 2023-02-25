/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap_ss.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:13:21 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/25 22:08:16 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_ss(t_stack *stack_a, t_stack *stack_b, char *message)
{
	ft_swap(stack_a, NULL);
	ft_swap(stack_b, NULL);
	ft_printf("%s\n", message);
}
