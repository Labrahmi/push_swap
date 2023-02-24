# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 15:23:13 by ylabrahm          #+#    #+#              #
#    Updated: 2023/02/24 08:44:44 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	./push_swap.c \
		./src/ps_utils/ps_check_args_utils.c \
		./src/ps_utils/ps_check_args.c \
		./src/ps_utils/ps_exit.c \
		./src/ps_utils/ps_fill.c \
		./src/ps_utils/ps_fill_utils.c \
		# ./src/operations/operation_sa.c \
		# ./src/operations/operation_sb.c \
		# ./src/operations/operation_ss.c \
		# ./src/operations/operation_pa.c \
		# ./src/operations/operation_pb.c \
		# ./src/operations/operation_ra.c \
		# ./src/operations/operation_rb.c \
		# ./src/operations/operation_rr.c \
		# ./src/operations/operation_rra.c \
		# ./src/operations/operation_rrb.c \
		# ./src/operations/operation_rrr.c 

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -f

# CFLAGS = -Wall -Wextra -Werror 

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