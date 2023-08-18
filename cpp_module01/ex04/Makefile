SRCS			= main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++

RM				= rm -f

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= sedIsForLosers

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) *.replace

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test