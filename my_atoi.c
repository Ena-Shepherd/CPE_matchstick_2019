/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** char* to int converter
*/

#include <stdlib.h>
#include "include/my.h"

int my_atoi(char* str)
{
    int nb = 0;
    int i = 0;
    int neg = 0;

    if (str[0] != 45 && str[0] < 48 || str[0] > 57)
        exit(EXIT_FAILURE);
    if (str[0] == 45) {
        i++;
        neg++;
    }
    for (int j = 1; str[j] != 0; j++) {
        if (str[j] < 48 || str[j] > 57)
            exit(EXIT_FAILURE);
    }
    for (; str[i] != 0; i++) {
        nb = nb * 10;
        nb += str[i] - 48;
    }
    if (neg > 0)
        return (nb * -1);
    return (nb);
}