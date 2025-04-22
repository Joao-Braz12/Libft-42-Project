filename = exec
header = libft.h
NAME = libft.a
libcreation = ar -rcs
libupdate = ranlib
source = main.c ft_isdigit.c ft_isalpha.c ft_isalnum.c
compile = gcc
rm = rm -f
flags = -Wall -Wextra -Werror
objects = $(source:.c \=.o)
I = -iquote
all: $(NAME)

$(NAME): $(objects) $(header)
	$(libcreation) $(lib) $(objects)
	$(libupdate) $(lib)
.c \.o:
	$(compile) $(flags) -c $< -o $(<:.c \=.o) $(I) $(header)  
clean:
	$(rm) *.o
fclean:
	$(rm) $(filename)
re: fclean all
