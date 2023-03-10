/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:15:16 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:29:13 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_exit(char *message, int stauts, void *array, char **d_array)
{
	int	i;

	i = 0;
	if (message)
		ft_putstr_fd(message, 2);
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
	exit(stauts);
}
