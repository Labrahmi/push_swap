/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate_rev_rrr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:23:38 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/28 17:31:44 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate_rev_rrr(t_stack *stack_a, t_stack *stack_b, char *message)
{
	ft_rotate_rev(stack_a, NULL);
	ft_rotate_rev(stack_b, NULL);
	ft_printf("%s\n", message);
}
