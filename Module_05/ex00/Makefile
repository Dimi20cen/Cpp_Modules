NAME = out

SRCS = main.cpp Bureaucrat.cpp

CXX  = clang++

RM  = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS) Bureaucrat.hpp
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re