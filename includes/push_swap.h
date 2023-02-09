/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:17:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/09 11:27:41 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "libft/get_next_line/get_next_line.h"

# ifndef MAX_STACK
# define MAX_STACK 10240
# endif

typedef struct s_stack
{
	int	top;
	int	array[MAX_STACK];
}	t_stack;


/* - - - - Function Prototypes - - - - - */

	/* ps_check_args */
	void	ft_check_args(char **argv);


	/* ps_exit */
	void	ft_exit(char *message, int stauts);


	/* ps_fill */
	void	ft_fill_stack(t_stack *stack, char **argv);
	

/* - - - - Function Prototypes - - - - - */

#endif