/*
** EPITECH PROJECT, 2020
** Yannis STEFANELLI
** File description:
** the main function
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/tab.h"

int main(int ac, char ** av)
{
    if (av[1] == NULL || av[2] == NULL || av[3] != NULL) {
        my_printf("Usage : ./matchstick \"nbsize\" \"nbmax\"");
        return (84);
    }
    int nblines = my_atoi(av[1]);
    int nbsticksmax = my_atoi(av[2]);
    if (nblines < 0 || nbsticksmax < 0 || nblines >= 100) {
        my_printf("Error: enter a number between 2 and 99");
        return (84);
    }
    char *tab_body = createtab(nblines);
    char **match_tab = my_char_totab(tab_body);
    
    drawmatches(match_tab, nblines);
    display_tab(nblines, match_tab);
    gameplay(nblines, nbsticksmax, match_tab);
    return (0);
}