/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/25 22:01:35 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_visual_stacks(t_stack *a, t_stack *b)
{
	t_node	*node;
	
	ft_printf("------------------------------------------\n");
	ft_printf("A: ");
	node = a->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->content);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	// - - - - - - - -
	ft_printf("\nB: ");
	node = b->top;
	if (node)
		while (node)
		{
			ft_printf("%d ", node->content);
			node = node->next;
		}
	else
		ft_printf("(empty)");
	ft_printf("\n------------------------------------------\n");
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *) malloc(sizeof(t_stack));
	stack_b = (t_stack *) malloc(sizeof(t_stack));
	if (argc > 1)
	{
		ft_init_stack(stack_a);
		ft_init_stack(stack_b);
		ft_fill_stack(stack_a, argv);
		ft_visual_stacks(stack_a, stack_b);
	}
	return (0);
}
