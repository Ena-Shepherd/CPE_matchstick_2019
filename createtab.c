/*
** EPITECH PROJECT, 2020
** Yannis STEFANELLI
** File description:
** the function that creates the graphical tab
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/tab.h"

char* toplines(int nb)
{
    int length = (nb * 2) + 1;
    char* str = malloc(sizeof(char) * length);

    for (int i = 0; i != length; i++)
        str[i] = '*';
    return (str);
}

char* body(int nb, char* len)
{
    int cmpt = 0;
    int length = (my_strlen(len) + nb) * nb;
    char* str = malloc(sizeof(char) * length);

    for (int i = 0; cmpt <= nb - 1; i++) {
        str[i] = '*';
        i++;
        for (int y = 0; y != nb - 1 + nb; y++) {
            str[i] = ' ';
            i++;
        }
        str[i] = '*';
        i++;
        str[i] = '\n';
        cmpt++;
    }
    str[length] = 0;
    return (str);
}

char* createtab(int nb)
{
    char *str = body(nb, toplines(nb));

    if (nb < 0) {
        my_printf("Error: invalid input (positive number expected)");
        exit(EXIT_FAILURE);
    }
    if (nb == 0) {
        my_printf("Error: invalid input (positive number expected)");
        exit(EXIT_FAILURE);
    }
    return (str);
}

void print_tab(char** str)
{
    for (int i = 0; str[i] != NULL; i++) {
        my_printf("%s", str[i]);
    }
}

void display_tab(int nblines, char **match_tab)
{
    my_printf("%s\n", toplines(nblines));
    print_tab(match_tab);
    my_printf("\n%s\n", toplines(nblines));
}