/*
** EPITECH PROJECT, 2020
** Yannis STEFANELLI
** File description:
** creating the gameplay basics
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"
#include "include/tab.h"

int my_getnbrline(const char *str)
{
    int i = 0;
    int n = 0;
    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\n'){
        if (str[i] < 48 || str[i] > 57)
            return (84);
        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n = n / 10;
    if (str[0] == '-')
        return (n * -1);
    else
        return (n);
}

int verify(size_t characters, char *buffer)
{
    if (characters == -1)
                exit(EXIT_SUCCESS);
    for (int i = 0; buffer[i] != '\n' && i < characters; i++) {
        if (buffer[i] < 48 || buffer[i] > 57) {
            my_printf("Error: invalid input (positive number expected)\n");
            return (84);
        }
    }
    return (0);
}

int check_values(int sizetab, int line_nbr, int matchmax, int matches)
{
    if (line_nbr > sizetab || line_nbr == 0) {
        my_printf("Error: this line is out of range\n");
        return (84);
    }
    if (matches > matchmax) {
        my_printf("Error: you cannot remove more than %d matches per turn\n", matchmax);
        return (84);
    }
    if (matches == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (84);
    }
}

int asking (int *line_nbr, int *matches, int sizetab, int matchmax)
{
    size_t characters;
    char *buffer;
    size_t bufsize = 32;

    buffer = (char *)malloc(bufsize * sizeof(char));
    my_printf("Line: ");
    characters = getline(&buffer,&bufsize,stdin);
    while(verify(characters, buffer) == 84) {
        my_printf("Line: ");
        characters = getline(&buffer,&bufsize,stdin);
    }
    *line_nbr = my_getnbrline(buffer);
    *matches = -1;
    if (check_values(sizetab, *line_nbr, matchmax, *matches) == 84)
        return(84);
    my_printf("Matches: ");
    characters = getline(&buffer,&bufsize,stdin);
    while(verify(characters, buffer) == 84) {
        my_printf("Matches: ");
        characters = getline(&buffer,&bufsize,stdin);
    }
    *matches = my_getnbrline(buffer);
    if (check_values(sizetab, *line_nbr, matchmax, *matches) == 84)
        return(84);
    return (0);
}

int gameplay(int sizetab, int matchmax, char **tab)
{
    int wndow = 1;
    int line_nbr;
    int matches;
    int wrong = 0;

    while (wndow == 1) {
        if (wrong < 1)
            my_printf("\nYour turn:\n");
        wrong = 0;
        if (asking(&line_nbr, &matches, sizetab, matchmax) == 84)
            wrong = 1;
        if (wrong < 1)
            if (rmvmatches(tab, line_nbr, matches) == 84)
                wrong = 1;
        if (wrong < 1) {
            my_printf("Player removed %d match(es) from line %d\n", matches, line_nbr);
            display_tab(sizetab, tab);
            checktab(tab);
            ia(tab, sizetab, matchmax);
        }
    }
    return (0);
}