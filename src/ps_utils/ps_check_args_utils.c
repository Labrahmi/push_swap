/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:18:10 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/11 20:17:20 by ylabrahm         ###   ########.fr       */
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
