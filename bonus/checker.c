/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:45:27 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/04/07 12:53:42 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_send_rule(char *s, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strncmp(s, "sa\n", 4) == 0)
		ft_swap(stack_a, 0);
	if (ft_strncmp(s, "sb\n", 4) == 0)
		ft_swap(stack_b, 0);
	if (ft_strncmp(s, "ss\n", 4) == 0)
		ft_swap_ss(stack_a, stack_b, 0);
	if (ft_strncmp(s, "pa\n", 4) == 0)
		ft_push_a(stack_a, stack_b, 0);
	if (ft_strncmp(s, "pb\n", 4) == 0)
		ft_push_b(stack_a, stack_b, 0);
	if (ft_strncmp(s, "ra\n", 4) == 0)
		ft_rotate(stack_a, 0);
	if (ft_strncmp(s, "rb\n", 4) == 0)
		ft_rotate(stack_b, 0);
	if (ft_strncmp(s, "rr\n", 4) == 0)
		ft_rotate_rr(stack_a, stack_b, 0);
	if (ft_strncmp(s, "rra\n", 5) == 0)
		ft_rotate_rev(stack_a, 0);
	if (ft_strncmp(s, "rrb\n", 5) == 0)
		ft_rotate_rev(stack_b, 0);
	if (ft_strncmp(s, "rrr\n", 5) == 0)
		ft_rotate_rev_rrr(stack_a, stack_b, 0);
}

void	ft_check_sort_bonus(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;
	int		i;
	int		j;

	i = 0;
	j = 0;
	node = stack_a->top;
	while (node->next)
	{
		if (node->position < node->next->position)
			j++;
		node = node->next;
		i++;
	}
	if (i == j && !(stack_b->top))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int ac, char *av[])
{
	char	*s;
	int		tot;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	tot = 0;
	ft_check_args(av, &tot);
	ft_fill_stack(stack_a, av, 1);
	while (1)
	{
		s = get_next_line(0);
		if (!(s))
			break ;
		ft_check_rules(s);
		ft_send_rule(s, stack_a, stack_b);
	}
	ft_check_sort_bonus(stack_a, stack_b);
	return (0);
}
