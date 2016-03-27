/******************************************************************************
*
* File Name        : puts.c
* Created By       : Hugo POULIQUEN
* Creation Date    : 03 13th, 2016
* Last Changed By  : Hugo POULIQUEN
* Last Change      : 03 13th, 2016
* Purpose          : Description
*
*******************************************************************************/
#include <math.h>
#include <unistd.h>
#include "../include/str/str_len.h"
#include "../include/puts/puts_char.h"
/*
**Function to display a number
** Param: number
*/
void my_puts_nbr(int nbr){
    int i, nbr_ascii=0, nbr2=0, *nbr1_prt=0;
    if(nbr<10){
        nbr_ascii = nbr + 48;
        nbr1_prt = &nbr_ascii;
        write(1,&nbr1_prt[0],1);
    } else{
        i=0;
        nbr_ascii = nbr;

        while(nbr_ascii>10){
            nbr_ascii = nbr_ascii/10;
            i++;
        }
        nbr2 = nbr_ascii * pow(10,i);
        nbr = nbr - nbr2;
        nbr_ascii = nbr_ascii + 48;
        nbr1_prt = &nbr_ascii;
        write(1,&nbr1_prt[0],1);
        my_puts_nbr(nbr);
    }
}

void my_puts_hexa(int nbr){
    unsigned int divisor, size, res;
    char *base;
    base = "0123456789abcdef";
    divisor = 1;
    size = my_strlen(base);

    while ((nbr / divisor) >= size){
        divisor = divisor * size;
    }

    while (divisor > 0){
        res = (nbr / divisor) % size;
        my_puts_char(base[res]);
        divisor = divisor / size;
    }
}

void my_puts_hexa_maj(int nbr){
    unsigned int divisor, size, res;
    char *base;
    base = "0123456789ABCDEF";
    divisor = 1;
    size = my_strlen(base);

    while ((nbr / divisor) >= size){
        divisor = divisor * size;
    }

    while (divisor > 0){
        res = (nbr / divisor) % size;
        my_puts_char(base[res]);
        divisor = divisor / size;
    }
}

void my_puts_octal(int nbr){
    unsigned int divisor, size, res;
    char *base;
    base = "01234567";
    divisor = 1;
    size = my_strlen(base);

    while ((nbr / divisor) >= size){
        divisor = divisor * size;
    }

    while (divisor > 0){
        res = (nbr/divisor) % size;
        my_puts_char(base[res]);
        divisor = divisor / size;
    }
}

void my_puts_binary(int nbr){
    unsigned int divisor, size, res;
    char *base;
    base = "01";
    divisor = 1;
    size = my_strlen(base);

    while ((nbr / divisor) >= size){
        divisor = divisor * size;
    }

    while (divisor > 0){
        res = (nbr/divisor) % size;
        my_puts_char(base[res]);
        divisor = divisor / size;
    }
}
