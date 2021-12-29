NAME	=	convert
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Convert.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	Convert.hpp

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