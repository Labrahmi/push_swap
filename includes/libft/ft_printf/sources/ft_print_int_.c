/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:38:46 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/01/18 20:16:46 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_print_int_(int i, int *ip)
{
	char			c;
	long long int	lli;

	lli = i;
	if (lli < 0)
	{
		lli = lli * (-1);
		write(1, "-", 1);
		(*ip) += 1;
	}
	if (lli < 10)
	{
		c = (lli % 10) + '0';
		write(1, &c, 1);
		(*ip) += 1;
	}
	else
	{
		ft_print_int_((lli / 10), (ip));
		ft_print_int_((lli % 10), (ip));
	}
}
