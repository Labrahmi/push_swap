/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:38:43 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/01/18 20:16:52 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_print_uint(unsigned int ui, int *count)
{
	char	c;

	if (ui < 10)
	{
		c = (ui % 10) + '0';
		write(1, &c, 1);
		(*count) += 1;
	}
	else
	{
		ft_print_int_((ui / 10), (count));
		ft_print_int_((ui % 10), (count));
	}
}
