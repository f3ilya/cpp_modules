# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snakita <snakita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:32:02 by snakita           #+#    #+#              #
#    Updated: 2022/11/01 20:32:02 by snakita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= 	phonebook

CC		=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	Contact.cpp	main.cpp PhoneBook.cpp

HDR =		Contact.hpp PhoneBook.hpp

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



