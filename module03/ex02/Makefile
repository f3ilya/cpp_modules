# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakita <snakita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 19:04:05 by snakita           #+#    #+#              #
#    Updated: 2022/11/01 19:04:24 by snakita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	fragtrap

CC		=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HDR =		ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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
