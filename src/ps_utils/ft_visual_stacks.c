/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visual_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:53:14 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/20 15:53:21 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_visual_stacks(t_stack a, t_stack b)
{
	int	i;

	i = a.top;
	ft_printf("------------------\n");
	ft_printf("A: ");
	while (i >= 0)
	{
		ft_printf("%d ", a.array[i]);
		i--;
	}
	ft_printf("\n");
	i = b.top;
	ft_printf("B: ");
	while (i >= 0)
	{
		ft_printf("%d ", b.array[i]);
		i--;
	}
	ft_printf("\n");
	ft_printf("------------------\n");
}