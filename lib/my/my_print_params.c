/*
** EPITECH PROJECT, 2019
** qsdfg
** File description:
** qdfg
*/

#include "../../include/my.h"
#include <stddef.h>

int my_print_params(char **str)
{
    int i = 0;
    for(i = 0; str[i] != NULL; i++)
    {
        my_putstr(str[i]);
        my_putchar('\n');
    }
    return (0);
}
