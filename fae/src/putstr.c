/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Display a string
*/

#include <unistd.h>

void fae_putstr(char const *str)
{
    int len = 0;

    if (!str)
        return;
    for (; str[len]; len++);
    write(0, str, len);
}
