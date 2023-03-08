/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:45:27 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/08 22:51:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check_rules(char *s)
{
	if ((ft_strlen(s) > 3) || (ft_strlen(s) < 2))
		ft_exit("Error\n", 1, 0, 0);
}

int main(void)
{
	char	*s;
	while (1)
	{
		s = get_next_line(0);
		if (!(s))
			break;
		ft_check_rules(s);
		ft_printf("%s", s);
	}
	return 0;
}
