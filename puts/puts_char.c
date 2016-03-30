/******************************************************************************
*
* File Name        : puts_char.c
* Created By       : Hugo POULIQUEN
* Creation Date    : 03 13th, 2016
* Last Changed By  : Hugo POULIQUEN
* Last Change      : 03 30th, 2016
*
*******************************************************************************/
#include <unistd.h>
#include "../include/str/str_len.h"
#include "../include/puts/puts_nbr.h"
/*
** Function to display one character
** Param: char
*/
void my_puts_char(char c){
    write(1, &c, 1);
}

/*
** Function to display string
** Param: pointeur
*/
void my_puts(char *str){
    write(1,str,my_strlen(str));
}

/*
** Function to display 0x for hexa number
** Param: int
*/
void my_puts_ptr(int ptr){
    my_puts("0x");
    my_puts_hexa(ptr);
}

/*
** Function to put extand number
** Param: string
*/
void my_puts_extand(char *str){
    while (*str){
        if (*str < 32 || *str >= 127){
            if (*str < 7)
                my_puts("\\00");
            else if (*str > 7 && *str < 32)
                my_puts("\\0");
            else if (*str >= 127)
                my_puts("\\");
            my_puts_octal(*str);
        }
        else
            my_puts_char(*str);
        str++;
    }
}
