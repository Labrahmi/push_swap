/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:09 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/05 22:35:40 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_swap()
// {

// }

// void	ft_push()
// {

// }

void	ft_fill_stack(t_stack *stack, char **argv)
{
	int	i;
	int	j;
	int	k;
	char	**splited;
	(void) stack;

	i = 1;
	while (argv[i])
	{
		splited = &argv[i];
		j = 0;
		while (splited[j])
		{
			k = 0;
			while (splited[j][k])
			{
				ft_printf("[%c]", splited[j][k]);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	t_stack	a;
	// t_stack	b;

	ft_printf("%d\n", argc);
	if (argc > 1)
	{
		ft_fill_stack(&a, argv);
	}
	return 0;
}
