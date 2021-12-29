NAME	=	zombiehorda
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	main.cpp Zombie.cpp ZombieHorde.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	Zombie.hpp

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