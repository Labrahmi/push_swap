/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:17:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 20:15:09 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# ifndef MAX_STACK
#  define MAX_STACK 10240
# endif

# define MX 2147483647
# define MN -2147483648

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

void	ft_check_strange(char splited_char);
void	ft_check_rep_util(int tot, int *array);
int		*ft_check_args(char **argv, int *main_tot);
void	ft_free(void *array, char **d_array);
void	ft_exit(char *message, int stauts, void *array, char **d_array);
void	ft_fill_stack(t_stack *stack, char **argv);
void	ft_init_stack(t_stack *stack);
void	ft_swap(t_stack *stack, char *message);
void	ft_swap_ss(t_stack *stack_a, t_stack *stack_b, char *message);
void	ft_push_b(t_stack *a, t_stack *b, char *message);
void	ft_push_a(t_stack *b, t_stack *a, char *message);
void	ft_rotate(t_stack *stack, char *message);
void	ft_rotate_rr(t_stack *stack_a, t_stack *stack_b, char *message);
void	ft_rotate_rev(t_stack *stack, char *message);
void	ft_rotate_rev_rrr(t_stack *stack_a, t_stack *stack_b, char *message);
void	ft_push_all_to_a(t_stack *stack_a, t_stack *stack_b);
void	ft_push_all_to_b(t_stack *stack_a, t_stack *stack_b);
int		ft_get_real_position(t_stack *stack_b, int curr);
int		ft_stack_size(t_stack stack_a);
int		ft_set_size(int size_of_stack);
t_node	*get_last_node(t_stack *stack_a);
t_node	*get_large_node(t_stack *stack_a);
int		ft_set_size(int size_of_stack);
void	ft_sort_small(t_stack *stack_a, t_stack *stack_b);
void	ft_sort_five(t_stack *stack_a, t_stack *stack_b);
void	ft_sort_three(t_stack *stack_a, int a_size);

/* - - - */
void	ft_check_rules(char *s);
/* - - - */

#endif