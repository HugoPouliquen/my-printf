/******************************************************************************
 *
 * File Name        : main.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 13th, 2016
 * Purpose          : Description
 *
 *******************************************************************************/
#include "include/my_printf.h"
#include <stdio.h>

int main(void){
    char *str = "astek";

    printf("##### Tests simple : 1 point par test reussi #####\n");
    printf(   "0) Modulo [%%] : {%%}\n");
    my_printf("=> Modulo [%%] : {%%}\n");
    printf(   "1) Nombre signe [d] : {%d}\n", 42);
    my_printf("=> Nombre signe [d] : {%d}\n", 42);
    printf(   "2) Nombre signe [i] : {%i}\n", 42);
    my_printf("=> Nombre signe [i] : {%i}\n", 42);
    printf(   "3) Nombre octal [o] : {%o}\n", 012345);
    my_printf("=> Nombre octal [o] : {%o}\n", 012345);
    printf(   "5) Nombre hexadecimal [x] : {%x}\n", 0x12345);
    my_printf("=> Nombre hexadecimal [x] : {%x}\n", 0x12345);
    printf(   "6) Nombre hexadecimal [X] : {%X}\n", 0x12345);
    my_printf("=> Nombre hexadecimal [X] : {%X}\n", 0x12345);
    printf("######Point extra, affichage en binaire, option supplémentaire a printf######\n");
    printf(   "7) Nombre binaire [b] : {101111101111110000001}\n");
    my_printf("=> Nombre binaire [b] : {%b}\n", 1564545);
    printf(   "8) Caractere [c] : {%c}\n", 42);
    my_printf("=> Caractere [c] : {%c}\n", 42);
    printf(   "9) Chaine [s] : {%s}\n", str);
    my_printf("=> Chaine [s] : {%s}\n", str);
    /*printf(   "10) Chaine etendue [S] : as\\012ek\n");
    my_printf("=>  Chaine etendue [S] : %S\n", stre);*/
    printf(   "11) Pointeur [p] : {%p}\n", str);
    my_printf("=>  Pointeur [p] : {%p}\n", str);
    /*printf(   "12) Mauvais parametre [k] : {%k}\n", 42);*/
    my_printf("=>  Mauvais parametre [k] : {%k}\n", 42);

    printf("Appuyez sur [entree] pour continuer...\n");
    getchar();
    
    printf("\n##### Tests pour verifier : -1pt par resultat errone #####\n");
    my_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
    my_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
    return 0;
}
