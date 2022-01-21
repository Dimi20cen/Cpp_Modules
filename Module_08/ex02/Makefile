NAME = out

SRCS = main.cpp mutantstack.cpp

CXX  = clang++

RM  = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS) mutantstack.hpp
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re