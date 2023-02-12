/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:15:16 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/11 19:58:06 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_exit(char *message, int stauts, void *array, char **d_array)
{
	int	i;

	i = 0;
	if (message)
		ft_printf("%s", message);
	// (void) array;
	// (void) d_array;
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
	while (1)
		;
	exit(stauts);
}
