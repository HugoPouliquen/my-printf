/******************************************************************************
 *
 * File Name        : my_printf.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 13th, 2016
 * Purpose          : Description
 *
 *******************************************************************************/
#include "include/puts/puts_char.h"
#include "include/str/str_len.h"
/*
    Pour avoir 20 :
    1- Printf doit être récursif
    2 - un pointeur de fonction
    peut compiler sur du 32bits ou 64bits
    Regarder les differentes option de myprintf
*/

char my_printf(char *src){
     return my_puts(src);
 }
