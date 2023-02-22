/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/22 17:57:31 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = (t_stack *) malloc(sizeof(t_stack));
	if (argc > 1)
	{
		ft_init_stack(stack_a);
		ft_fill_stack(stack_a, argv);
	}
	return (0);
}
