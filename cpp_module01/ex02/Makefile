SRCS			= main.cpp 

OBJS			= $(SRCS:.cpp=.o)
DEPS			= $(SRCS:.cpp=.d)

CXX				= c++

RM				= rm -f

CXXFLAGS		= -MMD -Wall -Wextra -Werror -std=c++98

NAME			= bonjour_ici_le_cerveau

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test
-include ${DEPS}