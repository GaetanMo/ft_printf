CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = to_ten.c ft_printf.c five.c
OBJ = $(SRCS:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	
re : fclean $(NAME)

.PHONY: all clean fclean re