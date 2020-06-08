/*
** EPITECH PROJECT, 2019
** qfg
** File description:
** sdfg
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (i = 0; src[i] != n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}
