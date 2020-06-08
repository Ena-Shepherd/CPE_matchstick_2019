/*
** CPool_Day03_2019 , 2019
** my_print_alpha
** File description :
** displays lowercase alphabet
*/

#include<unistd.h>

int my_isneg (int n){
    if(n<0) {
        write(1,&"N",1);
    }
    else {
    write(1,&"P",1);
    };
    write(1,&"\n",1);
    return (0);
}
