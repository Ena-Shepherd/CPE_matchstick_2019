#include <stdlib.h>
#include "include/tab.h"
#include "include/my.h"

int checktabia(char **tab)
{
    int line = 0;
    int j = 0;
    int actualmatches = 0;

    for (line = 1; tab[line-1] != NULL; line++) {
        for (j = 0; tab[line-1][j] != 0; j++) {
            if (tab[line-1][j] == '|')
                actualmatches++;
        }
    }
    
    if (actualmatches == 0) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        exit(EXIT_SUCCESS);
    }
}

int checktab(char **tab)
{
    int line = 0;
    int j = 0;
    int actualmatches = 0;

    for (line = 1; tab[line-1] != NULL; line++) {
        for (j = 0; tab[line-1][j] != 0; j++) {
            if (tab[line-1][j] == '|')
                actualmatches++;
        }
    }
    
    if (actualmatches == 0) {
        my_printf("You lost, too bad...\n");
        exit(EXIT_SUCCESS);
    }   
}

int rmvmatchesia(char **tab, int line, int matches)
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
    while (matches != 0) {
        while (tab[line - 1][(leng-1) - matches - (cmpt/2)] == ' ')
            leng--;
        tab[line - 1][(leng-1) - matches - (cmpt/2)] = ' ';
        matches--;
    }
    return (0);
}

void ia(char **tab, int sizetab, int maxmatches)
{
    int j = 0;
    int actualmatches = 0;
    int memma = 0;
    int memml = 0;
    int line = 0;
    for (line = 1; tab[line-1] != NULL; line++) {
        for (j = 0; tab[line-1][j] != 0; j++) {
            if (tab[line-1][j] == '|')
                actualmatches++;
        }
        if (memma < actualmatches && memma <= maxmatches) {
            memma = actualmatches;
            memml = line;
        }
        actualmatches = 0;
    }
    if (memma == 1) {
        rmvmatchesia(tab, memml, 1);
        my_printf("\nAI's turn...\nAI removed %d match(es) from line %d\n", memma, memml);
    }
    if (memma > 1) {
        if (memma < maxmatches) {
            rmvmatchesia(tab, memml, memma -1);
            my_printf("\nAI's turn...\nAI removed %d match(es) from line %d\n", memma -1, memml);
        }
        else {
            rmvmatchesia(tab, memml, maxmatches);
            my_printf("\nAI's turn...\nAI removed %d match(es) from line %d\n", maxmatches, memml);
        }
    }
    display_tab(sizetab, tab);
    checktabia(tab);
}