NAME	=	phonebook
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	main.cpp PhoneBook_class.cpp Contact_class.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	PhoneBook_class.hpp Contact_class.hpp

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

.PHONY:	all clean fclean re run