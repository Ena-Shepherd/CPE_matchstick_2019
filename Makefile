##
## EPITECH PROJECT, 2019
## CPE_matchstick_2019 [WSL: Ubuntu]
## File description:
## Makefile
##

SRC	=	./lib/my/my_printf.c \
		./lib/my/my_print_params.c \
		./lib/my/my_isneg.c \
		./lib/my/my_putchar.c \
		./lib/my/my_putstr.c \
		./lib/my/my_strlen.c \
		./lib/my/my_strncpy.c \
		./lib/my/my_put_nbr.c \
		./lib/my/my_strdup.c \
		./lib/my/my_compute_power_rec.c \
		./lib/my/my_compute_square_root.c \
		./lib/my/my_find_prime_sup.c \
		./lib/my/my_getnbr.c \
		./lib/my/my_is_prime.c \
		./lib/my/my_revstr.c \
		./lib/my/my_showmem.c \
		./lib/my/my_showstr.c \
		./lib/my/my_sort_int_array.c \
		./lib/my/my_strcapitalize.c \
		./lib/my/my_strcat.c \
		./lib/my/my_strcmp.c \
		./lib/my/my_strcpy.c \
		./lib/my/my_str_isalpha.c \
		./lib/my/my_str_islower.c \
		./lib/my/my_str_isnum.c \
		./lib/my/my_str_isprintable.c \
		./lib/my/my_str_isupper.c \
		./lib/my/my_strlowercase.c \
		./lib/my/my_strncat.c \
		./lib/my/my_strncmp.c \
		./lib/my/my_strstr.c \
		./lib/my/my_strupcase.c \
		./lib/my/my_swap.c \
		./lib/my/my_put_oct.c \
		./lib/my/my_put_bin.c \
		./lib/my/my_put_hex.c \
		./lib/my/my_put_hexmaj.c \
		
OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

lib:	$(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o matchstick main.c createtab.c \
	init_tab.c my_atoi.c \
	gameplay.c my_char_totab.c \
	ia.c libmy.a

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g3 -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f matchstick

re:	fclean lib
