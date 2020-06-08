/*
** EPITECH PROJECT, 2019
** qzertg
** File description:
** qsdfg
*/

#ifndef _MY_H_
#define _MY_H_
#include <stdarg.h>
#include <stddef.h>

unsigned int my_put_hexmaj(unsigned int nb);
unsigned int my_put_hex(unsigned int nb);
unsigned int my_put_oct(unsigned int nb);
unsigned int my_put_bin(unsigned int nb);
char **my_char_totab(char *text);
int square(char **tab);
int verify(char **tab, int i, int j, int check);
int openfile (char const *filepath);
char *reader (int fd, size_t count);
int my_printf(char *str, ...);
int disp_stdarg_flags(char *s, va_list ap, int i);
int my_putchar(char c);
int my_putstr(const char *str);
int my_isneg(int n);
char *my_strncpy(char *dest, char const *src, int n);
int my_put_nbr(int nb);
int my_print_params(char **str);
char *my_strdup(char const *src);
int my_compute_power_rec ( int nb , int p );
int my_compute_square_root(int nb);
int my_find_prime_sup (int nb);
int my_getnbr( char const *str );
int my_is_prime (int nb);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array (int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen ( char const * str );
char *my_strlowercase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap ( int *a , int *b);

#endif
