/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:14:42 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/12 11:46:10 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
					ft_exit("Error\n", 1, NULL, NULL);
			}
			if (splited[i + 1])
			{
				if (!(ft_isdigit(splited[i + 1])))
					ft_exit("Error\n", 1, NULL, NULL);
			}
			else
				ft_exit("Error\n", 1, NULL, NULL);
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
		ft_exit("Error\n", 1, NULL, NULL);
}

int	ft_check_int(char **argv)
{
	char			**splited;
	int				count;
	long long int	at;
	int				i;
	int				j;

	count = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		splited = ft_split(argv[i], ' ');
		while (splited[j])
		{
			at = ft_atoi(splited[j]);
			if (ft_strlen(splited[j]) > 11)
				ft_exit("Error\n", 1, NULL, splited);
			if (at < (-2147483648) || at > (2147483647))
				ft_exit("Error\n", 1, NULL, splited);
			j++;
			count++;
		}
		ft_free(NULL, splited);
		i++;
	}
	return (count);
}

void	ft_check_rep(char **argv, int tot)
{
	int		i;
	int		j;
	int		k;
	int		*array;
	char	**splited;

	k = 0;
	i = 1;
	array = ft_calloc(tot + 1, sizeof(int));
	if (!(array))
		ft_exit("Error\n", 1, NULL, NULL);
	while (argv[i])
	{
		j = 0;
		splited = ft_split(argv[i], ' ');
		while (splited[j])
		{
			array[k++] = ft_atoi(splited[j]);
			j++;
		}
		i++;
		ft_free(NULL, splited);
	}
	i = 0;
	j = 0;
	while (array[i])
	{
		j = i;
		while (array[j + 1])
		{
			if (array[i] == array[j + 1])
				ft_exit("Error\n", 1, array, splited);
			j++;
		}
		i++;
	}
}

void	ft_check_args(char **argv)
{
	int	i;
	int	tot;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0)
			ft_exit("Error\n", 1, NULL, NULL);
		ft_check_form(argv[i]);
		ft_check_min(argv[i]);
		i++;
	}
	tot = ft_check_int(argv);
	ft_check_rep(argv, tot);
	while (1);
}
