/*
** EPITECH PROJECT, 2020
** Yannis STEFANELLI
** File description:
** the tab header
*/

#ifndef _TAB_H_
#define _TAB_H_

char* createtab(int nb);
char* toplines(int nb);
void print_tab(char** str);
char **drawmatches(char **tab, int nb);
int rmvmatches(char **tab, int line, int matches);
int gameplay(int sizetab, int matchmax, char **tab);
void display_tab(int nblines, char **match_tab);
void ia(char **tab, int lines, int maxmatches);
int checktab(char **tab);

#endif