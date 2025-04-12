# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 18:11:03 by mthamir           #+#    #+#              #
#    Updated: 2025/04/11 18:11:05 by mthamir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Fixed

CC= c++ 

CPPFLAGS=  -std=c++98

SRC= Fixed.cpp main.cpp 

OBJ= main.o Fixed.o

HEADER= Fixed.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
