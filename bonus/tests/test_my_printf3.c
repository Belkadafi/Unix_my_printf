/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** test_my_printf3
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <include.h>

Test(my_printf, Should_print_a_padd)
{
    cr_redirect_stdout();
    my_printf("%3d", 7);
    cr_assert_stdout_eq_str("   7");
}

Test(my_printf, Should_print_a_0padd)
{
    cr_redirect_stdout();
    my_printf("%03d", 7);
    cr_assert_stdout_eq_str("007");
}

Test(my_printf, Should_print_a_percentge)
{
    cr_redirect_stdout();
    my_printf("%%");
    cr_assert_stdout_eq_str("%%");
}

Test(my_printf, Should_print_a_invalid_argument)
{
    cr_redirect_stdout();
    my_printf("%G", 7);
    cr_assert_stdout_eq_str("%G");
}