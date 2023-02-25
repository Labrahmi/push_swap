# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 15:23:13 by ylabrahm          #+#    #+#              #
#    Updated: 2023/02/25 20:24:54 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	./push_swap.c \
		./src/ps_utils/ps_check_args_utils.c \
		./src/ps_utils/ps_check_args.c \
		./src/ps_utils/ps_exit.c \
		./src/ps_utils/ps_fill.c \
		./src/ps_utils/ps_fill_utils.c \
		./src/operations/operation_push_a.c \
		./src/operations/operation_push_b.c \
		./src/operations/operation_swap.c \
		./src/operations/operation_swap_ss.c \
		./src/operations/operation_rotate.c \

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -f

# CFLAGS = -Wall -Wextra -Werror 
# CFLAGS = -fsanitize=address

all:	$(NAME)

$(NAME):	$(OBJS)
	@make -C includes/libft/
	$(CC) $(CFLAGS) includes/libft/libft.a $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	@make clean -C includes/libft/

fclean:	clean
	$(RM) $(NAME)
	@make fclean -C includes/libft/

re:	fclean all