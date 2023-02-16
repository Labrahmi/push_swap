/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 18:37:58 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_visual_stacks(t_stack a, t_stack b, int total)
{
	int	i;

	(void) b;
	(void) total;
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

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		total;

	if (argc > 1)
	{
		ft_init_stack(&a);
		ft_init_stack(&b);
		ft_fill_stack(&a, argv);
		total = a.top;
		// ft_visual_stacks(a, b, total);
	}
	return (0);
}
