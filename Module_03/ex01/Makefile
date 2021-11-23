NAME = justTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

FLAGS = -Wall -Wextra -Werror

$(RM) = rm -f

all: $(NAME)
$(NAME): $(SRCS) ClapTrap.hpp ScavTrap.hpp
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re