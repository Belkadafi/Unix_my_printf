/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** test_my_printf2
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <include.h>

Test(my_printf, Should_print_a_string)
{
    cr_redirect_stdout();
    my_printf("Bonjour %s lol\n", "nous voudrions manger");
    cr_assert_stdout_eq_str("Bonjour nous voudrions manger lol\n");
}

Test(my_printf, Should_print_a_number)
{
    cr_redirect_stdout();
    my_printf("Bonjour nous sommes %d a manger lol\n", 28);
    cr_assert_stdout_eq_str("Bonjour nous sommes 28 a manger lol\n");
}

Test(my_printf, Should_print_a_unsigned_int)
{
    unsigned int i = 28;
    cr_redirect_stdout();
    my_printf("%i", i);
    cr_assert_stdout_eq_str("28");
}

Test(my_printf, Should_print_a_10)
{
    cr_redirect_stdout();
    my_printf("Bonjour %o", 8);
    cr_assert_stdout_eq_str("Bonjour 10");
}

Test(my_printf, should_print_a_10_binary)
{
    cr_redirect_stdout();
    my_printf("Bonjour %b", 2);
    cr_assert_stdout_eq_str("Bonjour 10");
}