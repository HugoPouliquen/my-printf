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
#include <unistd.h>
#include "../include/str/str_len.h"
#include "../include/puts/puts_nbr.h"
/*
** Function to display one character
** Param: string
*/
void my_puts_char(char c){
    write(1, &c, 1);
}

/*
** Function to display string
** Param: string
*/
void my_puts(char *str){
    write(1,str,my_strlen(str));
}

void my_puts_ptr(int ptr){
    my_puts("0x");
    my_puts_hexa(ptr);
}
