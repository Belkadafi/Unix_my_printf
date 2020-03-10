##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## Makefile
##

SRC	=	*.c

OBJ	=	libmy.a

all	:
	gcc -c -g3 lib/my/$(SRC) my_printf.c
	ar rc $(OBJ) *.o
clean	:
	rm -f *.o

fclean	: clean
	rm -f a.out

re	: fclean all

tests_run :
	gcc -c lib/my/$(SRC)
	ar rc $(OBJ) *.o
	gcc -o units bonus/tests/*.c my_printf.c -L. -lmy --coverage -lcriterion -I include
	./units

coverage :
	gcovr --exclude bonus
get_html :
	gcovr --branches --exclude bonus --html --html-details -o rapport_branches.html

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm -f *.o
	rm -f units
	rm -f *.html

push	: fclean
	push_that.sh