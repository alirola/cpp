NAME = Brain

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = Animal.cpp\
		main.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp\

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): ./%.o : ./%.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:
	@ $(RM) $(NAME) $(OBJ)

re : fclean all

.PHONY: all re fclean clean