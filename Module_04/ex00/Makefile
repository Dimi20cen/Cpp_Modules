NAME = a.out

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

CXX  = clang++

RM  = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS) Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re