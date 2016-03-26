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
/*
** Function to display one character
** Param: string
*/
char my_puts_char(char *str){
    return write(1, str, 1);
}

/*
** Function to display string
** Param: string
*/
char my_puts(char str[]){
    return write(1,str,my_strlen(str));
}
