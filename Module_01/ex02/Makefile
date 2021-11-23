NAME = Zombie

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

$(RM) = rm -f

all: $(NAME)
$(NAME): $(SRCS)
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re