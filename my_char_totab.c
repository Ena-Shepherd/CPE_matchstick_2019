/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** a function that trasnforms an array in a tab of lines
*/

#include "./include/my.h"
#include <stdlib.h>

char **my_char_totab(char *text)
{
    int tmp = 0;
    int linesize = 0;
    int k = 0;
    int j = 0;
    int i = 0;
    int y = 0;

     for (int i = 0; text[i] != 0; i++) {
        if (text[i] == '\n')
            tmp++;
        if (tmp == 1 && text[i] != '\n')
            linesize++;
    }
    for (i = 0; text[i] != 0; i++) {
        if (text[i] == '\n')
            y++;
    }
    char **tab = malloc(sizeof(char *) *(y + 1));
    tab[0] = malloc(sizeof(char) * linesize);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            j++;
            tab[j] = malloc(sizeof(char) * (linesize + 1));
            k = 0;
        }
        tab[j][k] = text[i];
        k++;
    }
    tab[j] = NULL;
return (tab);
}