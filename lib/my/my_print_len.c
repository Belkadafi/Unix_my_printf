/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_len
*/

#include <stdarg.h>

void my_print_len(va_list ap, int test, char thing, int *n)
{
    int *result;

    result = va_arg(ap, int *);
    *n -= 1;
    *result = *n;
}