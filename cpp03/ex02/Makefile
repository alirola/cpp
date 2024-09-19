NAME = FragTrap
CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = ClapTrap.cpp\
		main.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

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