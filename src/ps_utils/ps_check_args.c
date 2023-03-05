/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:14:42 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:29:12 by ylabrahm         ###   ########.fr       */
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

typedef struct s_ps_check_args
{
	char	**s;
	int		count;
	int		i;
	int		j;
	int		x;
}	t_ps_check_args;

int	ft_check_int(char **argv)
{
	t_ps_check_args	t;

	t.count = 0;
	t.i = 0;
	while (argv[++(t.i)])
	{
		t.j = -1;
		t.s = ft_split(argv[t.i], ' ');
		while (t.s[++(t.j)])
		{
			t.x = 0;
			while (t.s[t.j][t.x] == '0' ||
				t.s[t.j][t.x] == '+' || t.s[t.j][t.x] == '-')
				(t.x)++;
			if (ft_strlen(&t.s[t.j][t.x]) > 11)
				ft_exit("Error\n", 1, NULL, t.s);
			if (ft_atoi(t.s[t.j]) < MN || ft_atoi(t.s[t.j]) > MX)
				ft_exit("Error\n", 1, NULL, t.s);
			(t.count)++;
		}
		ft_free(NULL, t.s);
	}
	return (t.count);
}

int	*ft_check_rep(char **argv, int tot)
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
	ft_check_rep_util(tot, array);
	return (array);
}

int	*ft_check_args(char **argv, int *main_tot)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0)
			ft_exit("Error\n", 1, NULL, NULL);
		ft_check_form(argv[i]);
		ft_check_min(argv[i]);
		i++;
	}
	*main_tot = ft_check_int(argv);
	return (ft_check_rep(argv, *main_tot));
}
