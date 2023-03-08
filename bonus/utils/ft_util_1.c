/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:58:42 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/09 00:39:03 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_check_exist(char *s)
{
	int i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	i += (ft_strncmp(s, "sa\n", len) == 0);
	i += (ft_strncmp(s, "sb\n", len) == 0);
	i += (ft_strncmp(s, "ss\n", len) == 0);
	i += (ft_strncmp(s, "pa\n", len) == 0);
	i += (ft_strncmp(s, "pb\n", len) == 0);
	i += (ft_strncmp(s, "ra\n", len) == 0);
	i += (ft_strncmp(s, "rb\n", len) == 0);
	i += (ft_strncmp(s, "rr\n", len) == 0);
	i += (ft_strncmp(s, "rra\n", len) == 0);
	i += (ft_strncmp(s, "rrb\n", len) == 0);
	i += (ft_strncmp(s, "rrr\n", len) == 0);
	if (i == 0)
		ft_exit("Error\n", 1, 0, 0);
}

void	ft_check_rules(char *s)
{
	if (s)
	{
		if ((ft_strlen(s) > 4) || (ft_strlen(s) < 3))
			ft_exit("Error\n", 1, 0, 0);
		ft_check_exist(s);
	}
}

