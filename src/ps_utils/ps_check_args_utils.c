/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:18:10 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/04/08 21:52:21 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_check_strange(char splited_char)
{
	int	ret;

	ret = 1;
	if (!(ft_isdigit(splited_char)))
		ret = 0;
	if (splited_char == '+' || splited_char == '-' || splited_char == ' ')
		ret = 1;
	if (!(ret))
		ft_exit("Error\n", 1, NULL, NULL);
}

void	ft_free(void *array, char **d_array)
{
	int	i;

	i = 0;
	if (array)
		free(array);
	if (d_array)
	{
		while (d_array[i])
		{
			free(d_array[i]);
			i++;
		}
		free(d_array);
	}
}

void	ft_check_rep_util(int tot, int *array)
{
	int	i;
	int	j;

	i = 0;
	while (i < tot)
	{
		j = i;
		while (j < (tot - 1))
		{
			if (array[i] == array[j + 1])
				ft_exit("Error\n", 1, array, NULL);
			j++;
		}
		i++;
	}
}

void	ft_free_stack(t_stack *stack)
{
	t_node	*node;
	t_node	*next;

	node = stack->top;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	free(stack);
}
