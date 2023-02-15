# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 15:23:13 by ylabrahm          #+#    #+#              #
#    Updated: 2023/02/15 22:40:35 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	./push_swap.c \
		./src/ps_utils/ps_check_args.c \
		./src/ps_utils/ps_check_args_utils.c \
		./src/ps_utils/ps_exit.c \
		./src/ps_utils/ps_fill.c \
		./src/operations/operation_sa.c

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror 

all:	$(NAME)

$(NAME):	$(OBJS)
	@make -C includes/libft/
	$(CC) includes/libft/libft.a $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	@make clean -C includes/libft/

fclean:	clean
	$(RM) $(NAME)
	@make fclean -C includes/libft/

re:	fclean all