NAME	=	materia
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp AMateria.cpp MateriaSource.cpp \
			Character.cpp Cure.cpp Ice.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	AMateria.hpp MateriaSource.hpp \
			Character.hpp IMateriaSource.hpp \
			Cure.hpp Ice.hpp ICharacter.hpp

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