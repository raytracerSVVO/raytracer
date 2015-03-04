#w**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spestean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/24 12:24:02 by spestean          #+#    #+#              #
#    Updated: 2015/02/24 12:45:45 by spestean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RT

CC = gcc

FLAGS = -Wall -Wextra -Werror

MLX = -lmlx -lXext -lX11

LIB = -L ./libft/ -lft -L/usr/X11/lib

SRCS = main.c

CREATE = make -C libft/

RM = rm -f RT

RM2 = make clean -C libft/

RM3 = make fclean -C libft/

all:
	@$(CREATE)
	@$(CC) $(FLAGS) $(MLX) $(LIB) -o $(NAME) $(SRCS)

clean:
	@$(RM)

fclean: clean
	@$(RM2)
	@$(RM3)

re: fclean all
