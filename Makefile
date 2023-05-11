# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 10:30:29 by albgonza          #+#    #+#              #
#    Updated: 2023/01/18 22:30:57 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= push_swap.c \
				stack_utils.c \
				stack_indexing.c \
				stack_edition.c \
				args_administration.c \
				extra_functions.c \
				function_utils.c \
				algorithm.c \

OBJS			= $(SRCS:.c=.o)
NAME			= push_swap
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -g
RM				= rm -f
LIBFT			= libft/libft.a
LIBFTFLAGS		= -L libft -l libft
COLOR_GREEN		= \033[1;32m
COLOR_NONE		= \033[0m

all: ascii $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft -s

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(LIBFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	
ascii:
		@echo "$(COLOR_GREEN)"
		@echo "                    __                          "
		@echo "   ___  __ __ ___  / /    ___ _    __ ___ _ ___ "
		@echo "  / _ \/ // /(_-< / _ \\  (_-<| |/|/ // _  // _ \\"
		@echo " / .__/\_,_//___//_//_/ /___/|__,__/ \_,_// .__/"
		@echo "/_/                                      /_/    "
		@echo "$(COLOR_NONE)"
clean:
		$(RM) $(OBJS)
		@make -C libft clean -s

fclean: clean
		$(RM) $(NAME)
		@make -C libft fclean -s

re: fclean all

visualize: all
	python3 python_visualizer.py `ruby -e "puts (7..50).to_a.shuffle.join(' ')"`

.PHONY: all clean fclean re