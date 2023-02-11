/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:14:42 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/10 21:44:04 by ylabrahm         ###   ########.fr       */
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
		ft_exit("Error\n", 1);
}

void	ft_check_form(char *splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		if (splited[i] == '+' || splited[i] == '-')
		{
			if (splited[i - 1])
			{
				if (splited[i - 1] != ' ')
					ft_exit("Error\n", 1);
			}
			if (splited[i + 1])
			{
				if (!(ft_isdigit(splited[i + 1])))
					ft_exit("Error\n", 1);
			}
			else
				ft_exit("Error\n", 1);
			
		}
		if (splited[i])
			ft_check_strange(splited[i]);
		i++;
	}
}

void	ft_check_min(char *splited)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (splited[i])
	{
		if (splited[i] != ' ')
			ret = 1;
		i++;
		while (splited[i] == ' ')
			i++;
	}
	if (ret == 0)
		ft_exit("Error\n", 1);
}

void	ft_check_int(char **argv)
{
	int		i;
	int		j;
	char	**splited;

	i = 1;
	while (argv[i])
	{
		j = 0;
		splited = ft_split(argv[i], ' ');
		while (splited[j])
		{
			if (ft_strlen(splited[j]) > 10)
				ft_exit("Error\n", 1);
			ft_atoi();
			j++;
		}
		i++;
	}
}

void	ft_check_args(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0)
			ft_exit("Error\n", 1);
		ft_check_form(argv[i]);
		ft_check_min(argv[i]);
		i++;
	}
	ft_check_int(argv);
}
