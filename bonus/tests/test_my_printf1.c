/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** test_my_printf1
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <include.h>

Test(my_printf, Should_print_A)
{
    cr_redirect_stdout();
    my_printf("A");
    cr_assert_stdout_eq_str("A");
}

Test(my_printf, Should_print_H)
{
    cr_redirect_stdout();
    my_printf("%c", 'H');
    cr_assert_stdout_eq_str("H");
}

Test(my_printf, Should_print_lol)
{
    cr_redirect_stdout();
    my_printf("l%cl", 'o');
    cr_assert_stdout_eq_str("lol");
}

Test(my_printf, Should_print_Wesh)
{
    cr_redirect_stdout();
    my_printf("%c%c%c%c\n", 'W', 'e', 's', 'h');
    cr_assert_stdout_eq_str("Wesh\n");
}

Test(my_printf, Should_print_unprintable)
{
    cr_redirect_stdout();
    my_printf("\n\t\a%c\n", '\b');
    cr_assert_stdout_eq_str("\n\t\a\b\n");
}