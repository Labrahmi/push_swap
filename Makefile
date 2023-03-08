# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 15:23:13 by ylabrahm          #+#    #+#              #
#    Updated: 2023/03/09 00:20:32 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRCS = 	./src/push_swap/push_swap_utils.c \
		./src/push_swap/push_swap_utils_2.c \
		./src/ps_utils/ps_check_args_utils.c \
		./src/ps_utils/ps_check_args.c \
		./src/ps_utils/ps_exit.c \
		./src/ps_utils/ps_fill.c \
		./src/ps_utils/ps_fill_utils.c \
		./src/algorithm/push_all_to_a.c \
		./src/algorithm/push_all_to_b.c \
		./src/operations/operation_push_a.c \
		./src/operations/operation_push_b.c \
		./src/operations/operation_swap.c \
		./src/operations/operation_swap_ss.c \
		./src/operations/operation_rotate.c \
		./src/operations/operation_rotate_rr.c \
		./src/operations/operation_rotate_rev.c \
		./src/operations/operation_rotate_rev_rrr.c \
		./bonus/utils/ft_util_1.c

SRCS_MANDT = ./src/push_swap/push_swap.c 

SRCS_BONUS = ./bonus/checker.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

OBJS_MANDT = $(SRCS_MANDT:.c=.o)

CC = cc

RM = rm -f

# CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS) $(OBJS_MANDT)
	@make -C includes/libft/
	$(CC) $(CFLAGS) includes/libft/libft.a $(OBJS) $(OBJS_MANDT) -o $(NAME)

clean:
	@make clean -C includes/libft/
	$(RM) $(OBJS) $(OBJS_BONUS) $(OBJS_MANDT)

fclean:	clean
	@make fclean -C includes/libft/
	$(RM) $(NAME) $(NAME_BONUS) $(OBJS_MANDT)

bonus: $(OBJS_BONUS) $(OBJS)
	@make -C includes/libft/
	$(CC) $(CFLAGS) includes/libft/libft.a $(OBJS) $(OBJS_BONUS) -o $(NAME_BONUS)

re:	fclean all