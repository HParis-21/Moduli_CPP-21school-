NAME	=	accoubt
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	Account.cpp tests.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	= Account.hpp

all: $(NAME)

$(NAME): $(OBJS) ${HEADER}
		$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re