/*
** EPITECH PROJECT, 2019
** szdfgh
** File description:
** dsfghng
*/

#include "my.h"
#include<stdlib.h>

char *my_revstr( char *str ) {
    int i =0;
    int nb = 0;

    while(str[i] != '\0') {
        i++;
    }
    while(i >= 0) {
        my_putchar(str[i]);
        i--;
    }
    return (str);
}