SRCS			= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++

RM				= rm -f

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= unnecessaryViolence

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test