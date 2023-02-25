/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:17:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/02/25 22:33:53 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"

# ifndef MAX_STACK
#  define MAX_STACK 10240
# endif

#  define MX 2147483647
#  define MN (-MX-1)

typedef struct s_stack
{
	struct s_node	*top;
}	t_stack;

typedef struct s_node
{
	int				content;
	long int		position;
	struct s_node	*next;
}	t_node;

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
void	ft_swap(t_stack *stack, char *message);
void	ft_swap_ss(t_stack *stack_a, t_stack *stack_b, char *message);

// *
void	ft_push_b(t_stack *a, t_stack *b, char *message);
void	ft_push_a(t_stack *a, t_stack *b, char *message);

// *
void	ft_rotate(t_stack *stack, char *message);
void	ft_rotate_rr(t_stack *stack_a, t_stack *stack_b, char *message);

// *
void	ft_rotate_rev(t_stack *stack, char *message);
void	ft_rotate_rev_rrr(t_stack *stack_a, t_stack *stack_b, char *message);

/* - - - - Function Prototypes - - - - - */

#endif