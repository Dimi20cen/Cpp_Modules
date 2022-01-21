NAME = a.out

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

CXX  = clang++

RM  = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS) AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re