# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakita <snakita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:31:03 by snakita           #+#    #+#              #
#    Updated: 2022/11/01 20:31:03 by snakita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	claptrap

CC		=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp ClapTrap.cpp

HDR =		ClapTrap.hpp

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

re:			fclean all
