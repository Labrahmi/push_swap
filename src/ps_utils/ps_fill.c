/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:17:06 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/22 18:09:07 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->top = NULL;
}

int	*ft_coppy(int *src, int size)
{
	int	i;
	int	*dst;

	dst = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}

void	ft_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

t_node	*ft_push_node_to_stack(int number, int *sorted_array, t_stack *stack, int size)
{
	t_node	*node;
	int		i;

	node = (t_node *) malloc(sizeof(t_node));
	node->content = number;
	node->next = NULL;
	i = 0;
	while (i < size)
	{
		if (number == sorted_array[i])
			node->position = i;
		i++;
	}
	return (node);
}

void ft_fill_stack(t_stack *stack, char **argv)
{
	int		*array;
	int		*s_array;
	int		tot;
	int		i;
	int		j;
	t_node	*node;

	array = ft_check_args(argv, &tot);
	s_array = ft_coppy(array, tot);
	ft_bubble_sort(s_array, tot);
	
	printf("'%p'\n", array);
	printf("'%p'\n", s_array);

	return ;
	// i = 0;
	// while (i < tot)
	// {
	// 	node = ft_push_node_to_stack(array[i], s_array, stack, tot);
	// 	printf("%d\n", node->content);
	// 	sleep(1);
	// 	i++;
	// }
}
