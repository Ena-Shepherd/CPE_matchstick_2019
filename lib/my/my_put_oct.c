/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** a simple octal converter based on my_put_nbr
*/

#include<unistd.h>
#include"my.h"

unsigned int my_put_oct(unsigned int nb)
{
    int i;
    if (nb >= 0) {
        if (nb > 7){
            i = (nb % 8);
            nb = nb / 8;
            my_put_oct(nb);
            my_putchar(48 + i);
        } else {
            my_putchar(48 + nb);
        }
    }
}