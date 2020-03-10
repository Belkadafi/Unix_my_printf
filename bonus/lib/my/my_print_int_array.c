/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_int_array
*/

#include <stdarg.h>
#include <unistd.h>

int my_put_nbr(int nb);

void my_putchar(char);

int my_int_len(int result)
{
    int tempo;
    int len = 0;

    tempo = result;
    while (tempo > 0) {
        tempo = tempo / 10;
        len += 1;
    }
    return (len);
}

void my_print_int_array(va_list ap, int test, char thing, int n)
{
    int *result;
    int len = 0;
    int size;

    result = va_arg(ap, int *);
    size = result[0];
    for (int icr = 1; icr < size; icr += 1) {
        len = my_int_len(result[icr]);
        if (thing == ' ')
            test += 1;
        for (int i = 0; i + len < test; i += 1)
            my_putchar(thing);
        my_put_nbr(result[icr]);
        if (icr < size - 1) {
            my_putchar(44);
            my_putchar(' ');
        }
    }
}