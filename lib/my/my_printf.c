/*
** EPITECH PROJECT, 2019
** Yannis STEFANELLI
** File description:
** flags
*/

#include"my.h"
#include<stdlib.h>
#include<stdarg.h>

int disp_stdarg_flags(char *s, va_list ap, int i)
{
            switch (s[i+1]) {
                case 'i':
                    my_put_nbr(va_arg(ap, int));
                    break;
                case 'd':
                    my_put_nbr(va_arg(ap, int));
                    break;
                case 'c':
                    my_putchar(va_arg(ap, int));
                    break;
                case 'u':
                    my_put_nbr(va_arg(ap, unsigned int));
                    break;
                case 's':
                    my_putstr(va_arg(ap, char *));
                    break;
                case 'b':
                    my_put_bin(va_arg(ap, unsigned int));
                    break;
                case 'o':
                    my_put_oct(va_arg(ap, unsigned int));
                    break;
                case 'x':
                    my_put_hex(va_arg(ap, unsigned int));
                    break;
                case'X':
                    my_put_hexmaj(va_arg(ap, unsigned int));
                    break;
                case 'n':
                    my_put_nbr(my_strlen(s));
                    break;
                default:
                    break;
            }
            if (s[i] == '%' && s[i+1] == '%') {
                my_putchar('%');
                i++;
            }
    return (0);
}
int my_printf(char *str, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap,str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            disp_stdarg_flags(str, ap, i);
            i++;
        } else {
            my_putchar(str[i]);
        }
    }
    va_end(ap);
    return (0);
}
