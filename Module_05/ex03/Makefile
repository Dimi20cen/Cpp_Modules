NAME = out

SRCS = main.cpp Bureaucrat.cpp Form.cpp \
	PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
	Intern.cpp

CXX  = clang++

RM  = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCS) Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re