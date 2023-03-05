/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate_rev_rrr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:23:38 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:28:52 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate_rev_rrr(t_stack *stack_a, t_stack *stack_b, char *message)
{
	ft_rotate_rev(stack_a, NULL);
	ft_rotate_rev(stack_b, NULL);
	ft_putstr_fd(message, 1);
	ft_putstr_fd("\n", 1);
}
