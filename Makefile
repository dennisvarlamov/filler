# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 19:26:33 by nglynis           #+#    #+#              #
#    Updated: 2020/11/08 19:26:34 by nglynis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	nglynis.filler
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -O2

FILLER_SRC	=	main.c				check_min.c 		\
				init.c				solve.c   		\
				break_through.c 	reach_size.c	\
				del.c 				reach_borders.c 	\
				parse.c

LIB_DIR		=	libft
LIB			=	libft/libft.a
INC			=	libft
LIB_H		=	libft/libft.h

FILLER_H	=	filler.h

all: $(NAME)

$(LIB) : $(LIB_DIR)
	make -C $(LIB_DIR)

$(NAME): $(FILLER_SRC) $(LIB) $(INC) $(LIB_H) $(FILLER_H)
	$(CC) $(FLAGS) -o $(NAME) $(FILLER_SRC) $(LIB) -I $(INC)

clean:
	rm -f $(NAME)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean

re: fclean all
