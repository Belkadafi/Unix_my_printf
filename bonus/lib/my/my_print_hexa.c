/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_hexa
*/

#include <stdarg.h>

int my_putnbr_base(int nbr, char const *base);

void my_putchar(char);

void my_print_hexa(va_list ap, int test, char thing, int n)
{
    int result;
    int len = 0;
    int tempo;

    result = va_arg(ap, int);
    tempo = result;
    while (tempo > 0) {
        tempo = tempo / 16;
        len += 1;
    }
    for (int i = 0; i + len < test; i += 1)
        my_putchar(thing);
    my_putnbr_base(result, "0123456789abcbef");
}