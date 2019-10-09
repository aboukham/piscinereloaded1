name		=	libft.a
src			=	ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c
obj			=	ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
header		=	includes/
cflags		=	-Wall -Werror -Wextra

all: $(name)

$(name):
	cc $(cflags) -c $(src) -I $(header)
	ar rc $(name) $(obj)
	ranlib $(name)

clean: 
	rm -rf $(obj)

fclean:clean
	rm -rf $(name)

re: fclean all
