# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakita <snakita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:32:34 by snakita           #+#    #+#              #
#    Updated: 2022/11/01 20:32:34 by snakita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	zombie

CC		=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

HDR =		Zombie.hpp

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
