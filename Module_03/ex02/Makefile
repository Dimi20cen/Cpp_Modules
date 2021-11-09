NAME = allTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = -Wall -Wextra -Werror

$(RM) = rm -f

all: $(NAME)
$(NAME): $(SRCS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re