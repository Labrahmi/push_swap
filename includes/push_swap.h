/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:17:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/16 18:40:06 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"

# ifndef MAX_STACK
#  define MAX_STACK 10240
# endif

typedef struct s_stack
{
	int	top;
	int	array[MAX_STACK];
}	t_stack;

/* - - - - Function Prototypes - - - - - */

/* ps_check_args */
void	ft_check_strange(char splited_char);
void	ft_check_rep_util(int tot, int *array);
int		*ft_check_args(char **argv, int *main_tot);
void	ft_free(void *array, char **d_array);

/* ps_exit */
void	ft_exit(char *message, int stauts, void *array, char **d_array);

/* ps_fill */
void	ft_fill_stack(t_stack *stack, char **argv);
void	ft_init_stack(t_stack *stack);

/* operations */
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_pa(t_stack *stack_a, t_stack *stack_b);
void	ft_pb(t_stack *stack_a, t_stack *stack_b);
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);


/* - - - - Function Prototypes - - - - - */

#endif