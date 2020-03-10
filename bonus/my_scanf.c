/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_scanf
*/

#include "include/include.h"

static scan_t tab[] =
{
    {'d', my_scan_nbr},
    {'s', my_scan_str},
    {'c', my_scan_char}
};

void my_scanner(char *format, va_list ap)
{
    int j = 0;

    for (int i = 0; i < 3; i += 1) {
        if (*(format + 1) == tab[i].c) {
            tab[i].ptr(ap);
            j = 1;
        }
    }
    if (j == 0) {
        my_putchar('%');
        my_putchar(format[1]);
    }
}

void my_scanf(char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i += 1) {
        if (format[i] == '%' && format[i + 1 ] == '%') {
            i += 1;
            my_putchar('%');
        }
        else if (format[i] == '%' && format[i + 1] != '%') {
            my_putchar('\n');
            my_scanner(&format[i], ap);
            i += 1;
        }
        else
            my_putchar(format[i]);
    }
}