/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_string_array
*/

#include <stdarg.h>
#include <stdlib.h>

void my_putstr(char const *);

int my_strlen(char const *);

void my_putchar(char);

void my_print_string_array(va_list ap, int test, char thing, int n)
{
    char **result;
    int len = 0;
    char *tempo;

    result = va_arg(ap, char **);
    for (int icr = 0; result[icr] != NULL ; icr += 1) {
        len = my_strlen(result[icr]);
        tempo = malloc(len);
        if (thing == ' ')
            test += 1;
        for (int i = 0; i + len < test; i += 1)
            my_putchar(thing);
        my_putstr(result[icr]);
        if (result[icr + 1] != NULL) {
            my_putchar(44);
            my_putchar(' ');
        }
    }
}