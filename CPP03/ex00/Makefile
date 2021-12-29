NAME	=	claptrap
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	main.cpp ClapTrap.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	ClapTrap.hpp

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