/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/09 17:25:49 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc > 1)
	{
		if (!(argv[1][0]))
			exit(0);
		stack_a = (t_stack *)malloc(sizeof(t_stack));
		stack_b = (t_stack *)malloc(sizeof(t_stack));
		ft_init_stack(stack_a);
		ft_init_stack(stack_b);
		ft_fill_stack(stack_a, argv);
		if (ft_stack_size(*stack_a) == 1)
			return (0);
		if (ft_stack_size(*stack_a) <= 5)
			ft_sort_small(stack_a, stack_b);
		else
		{
			ft_push_all_to_b(stack_a, stack_b);
			ft_push_all_to_a(stack_a, stack_b);
		}
	}
	return (0);
}
