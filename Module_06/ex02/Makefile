NAME = out

SRCS = main.cpp Base.cpp

FLAGS = -Wall -Wextra -Werror

$(RM) = rm -f

all: $(NAME)
$(NAME): $(SRCS) A.hpp B.hpp C.hpp Base.hpp
	clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re