/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_scan_char
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *);

int my_getnbr(char const *);

void my_scan_char(va_list ap)
{
    char *tempo;
    char temp[1];
    tempo = (va_arg(ap, char *));
    read(0, temp, 1);
    *tempo = temp[0];
}

void my_scan_nbr(va_list ap)
{
    int tempo;
    int *truc;
    char temp[1];
    char tmp[10];
    char *nbr;
    int i = 0;
    while (temp[0] != ' ' && temp[0] != '\n' && temp[0] != '\t' && i < 10) {
        if (temp[0] != ' ' && temp[0] != '\n' && temp[0] != '\t' && i < 10)
            read(0, temp, 1);
        tmp[i] = temp[0];
        i += 1;
    }
    nbr = malloc(i);
    for (int icr = 0; icr < i; icr += 1)
        nbr[icr] = tmp[icr];
    tempo = my_getnbr(nbr);
    truc = va_arg(ap, int *);
    *truc = tempo;
}

char *my_realloc(char *src, int nb)
{
    char *dest;

    dest = malloc(my_strlen(src) + 1);
    for (int i = 0; src[i] != '\0'; i += 1)
        dest[i] = src[i];
    return (dest);
}

void my_scan_str(va_list ap)
{
    char **thing;
    thing = va_arg(ap, char **);
    char *truc;
    truc = malloc(1);
    int i = 0;
    char temp[1];
    while (temp[0] != ' ' && temp[0] != '\n' && temp[0] != '\t') {
        if (temp[0] != ' ' && temp[0] != '\n' && temp[0] != '\t')
            read(0, temp, 1);
        truc[i] = temp[0];
        i += 1;
        truc = my_realloc(truc, 1);
    }
    *thing = truc;
}