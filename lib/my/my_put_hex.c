/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** a simple hexadec converter
*/

#include<stdlib.h>
#include<unistd.h>
#include"my.h"

unsigned int my_put_hex(unsigned int nb)
{
    int i = 0;
    char *str = malloc(sizeof(unsigned int) * 1);
    for(int j = 0; nb != 0; j++) {
       i = nb % 16;
       switch (i) {
           case 10:
           str[j] = 'a';
           break;
           case 11:
           str[j] = 'b';
           break;
           case 12:
           str[j] = 'c';
           break;
           case 13:
           str[j] = 'd';
           break;
           case 14:
           str[j] = 'e';
           break;
           case 15:
           str[j] = 'f';
           break;
           default:
           str[j] = 48 + i;
           break;
       }
       nb = nb / 16;
    }
    my_revstr(str);
    free(str);
}