NAME = Karen

SRCS = main.cpp Karen.cpp

FLAGS = -Wall -Wextra -Werror

$(RM) = rm -f

all: $(NAME)
$(NAME): $(SRCS) Karen.hpp
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re