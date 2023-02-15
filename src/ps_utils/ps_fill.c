/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:17:06 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/15 15:50:59 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_fill_stack(t_stack *stack, char **argv)
{
	int		*array;
	int		tot;
	int		i;

	i = 0;
	(void) stack;
	array = ft_check_args(argv, &tot);
	ft_printf("OK\n");
}
