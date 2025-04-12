NAME=Fixed

CC= c++ 

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

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
