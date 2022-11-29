# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakita <snakita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 23:10:08 by snakita           #+#    #+#              #
#    Updated: 2022/11/29 23:52:12 by snakita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	convert

CC		=	c++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp Convert.cpp

HDR		=	Convert.hpp

OBJS	=	$(SRC:.cpp=.o)

RM		=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "Compiled "$(NAME)" successfully!"

%.o:%.cpp $(HDR)
				@$(CC) $(FLAGS) -c $< -o $@
				@echo "---Compiled "$<" successfully!---"

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

test:
				./convert 0
				./convert nan
				./convert 42.0f

re:			fclean all
