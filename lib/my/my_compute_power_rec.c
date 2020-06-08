/*
**dezfrght
**fz'rg(t
**efrgz
**efzg
*/

#include<stdio.h>
int my_compute_power_rec ( int nb , int p ){
        if(p==0) {
            return (1);
        }
        if (p>1) {
        nb = nb* my_compute_power_rec(nb,p-1);
        }
        return (nb);
}
