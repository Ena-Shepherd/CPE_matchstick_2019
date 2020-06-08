/*
** EPITECH PROJECT, 2020
** Yannis STEFANELLI
** File description:
** drawing matches, and replacing them
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/tab.h"

void erase(int line, int leng, int matches)
{
    
}

void my_error(int nb)
{
    if (nb == 1) {
        my_printf("Error: we don't do 1 turn games");
        exit(EXIT_FAILURE);
    }
}

char **drawmatches(char **tab, int nb)
{
    int i = 1;
    int j = 0;
    int leng = 0;
    int cmpt = 0;

    my_error(nb);
    for (j = 1; tab[i][j] != 0; j++) {
        leng++;
    }
    tab[0][leng / 2] = '|';
    while (i < nb) {
        while (cmpt != leng - (nb * 2) + (i*2)) {
            tab[i][leng - cmpt - nb + i] = '|';
            cmpt++;
        }
        cmpt = 0;
        i++;
    }
    return (tab);
}

int rmvmatches(char **tab, int line, int matches)
{
    int i = 0;
    int j = 0;
    int actualmatches;
    int leng = 0;
    int cmpt = 0;

    for (j = 0; tab[line-1][j] != 0; j++) {
        leng++;
        if (tab[line-1][j] == ' ')
            cmpt++;
        if (tab[line-1][j] == '|')
            actualmatches++;
    }
    if (matches > (actualmatches - 2)) {
        my_printf("Error: not enough matches on this line\n");
        return (84);
    }
    while (matches != 0) {
        while (tab[line - 1][(leng-1) - matches - (cmpt/2)] == ' ')
            leng--;
        tab[line - 1][(leng-1) - matches - (cmpt/2)] = ' ';
        matches--;
    }
    return (0);
}