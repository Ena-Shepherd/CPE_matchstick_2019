/*
** EPITECH PROJECT, 2019
** sdfg
** File description:
** zsdfg
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dup;
    dup = malloc(sizeof(char) * my_strlen(src)+1);
    my_strcpy(dup, src);
    return (dup);
}
