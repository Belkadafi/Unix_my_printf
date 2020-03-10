##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## Makefile
##

SRC	=	*.c

OBJ	=	libmy.a

all	:
	gcc -c -g3 lib/my/$(SRC) my_printf.c my_scanf.c
	ar rc $(OBJ) *.o
clean	:
	rm -f *.o

fclean	: clean
	rm -f a.out

re	: fclean all

tests_run :
	gcc -c lib/my/$(SRC)
	ar rc $(OBJ) *.o
	gcc -o units bsq_main.c tests/bsq_main_test.c -L. -lmy --coverage -lcriterion -I include

coverage :
	./units
	gcovr --exclude test

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm -f *.o
	rm -f units