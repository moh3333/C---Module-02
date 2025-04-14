NAME=BSP

CC= c++ 

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= Fixed.cpp Point.cpp bsp.cpp main.cpp 

OBJ= Fixed.o Point.o bsp.o main.o 

HEADER= Fixed.hpp Point.hpp

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
