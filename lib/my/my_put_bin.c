/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** a simple binary converter based on my_put_nbr
*/

#include<unistd.h>
#include"my.h"

unsigned int my_put_bin(unsigned int nb)
{
    int i;
    if (nb > 0){
        if (nb > 1){
            i = (nb % 2);
            nb = (nb - i) / 2;
            my_put_bin(nb);
            my_putchar(48 + i);
        }
        else
            my_putchar(48 + nb % 2);
    }
}