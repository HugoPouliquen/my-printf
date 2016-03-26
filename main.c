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
    my_printf(str);

    return 0;
}
