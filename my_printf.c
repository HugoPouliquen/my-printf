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
#include "include/puts/puts_nbr.h"
#include "include/str/str_len.h"
#include <stdarg.h>

void (*str_functions[4])(char *) = {
    my_puts, my_puts_ptr, my_puts_extand, my_puts
};

void (*int_functions[7])(int) = {
    my_puts_nbr, my_puts_nbr, my_puts_octal, my_puts_hexa, my_puts_hexa_maj,
    my_puts_binary, my_puts_nbr
};

struct Bar{
    int index_flag;
    int index_format;
    int str_list;
};

struct Bar search_index_flags(char search);
struct Bar search_index_flags(char search){
    struct Bar result;
    char *flags_str, *flags_int;
    flags_str = "spS%";
    flags_int = "dioxXbu";
    result.index_flag =  result.str_list = -1;

    for (int i = 0; flags_str[i]; i++) {
        if (flags_str[i] == search){
            result.str_list = 1;
            result.index_flag = i;
        }
    }
    if (result.str_list == -1) {
        for (int i = 0; flags_int[i]; i++) {
            if (flags_int[i] == search){
                result.str_list = 0;
                result.index_flag = i;
            }
        }
    }
    return result;
}

int my_printf(char *format, ...){
    va_list va;
    struct Bar dunno;
    va_start (va, format);

    for (int i = 0; format[i]; i++){
        if(format[i] == '%'){
            i++;
            dunno = search_index_flags(format[i]);
            if(format[i] == '%')
                my_puts_char((char)(format[i]));
            else if(format[i] == 'c')
                my_puts_char(va_arg(va, int));
            else if(dunno.str_list == 1)
                str_functions[dunno.index_flag](va_arg(va, char*));
            else if(dunno.str_list == 0)
                int_functions[dunno.index_flag](va_arg(va, int));
            else
                my_puts("---- Sorry bad param ----");
        }
        else
            my_puts_char((char)(format[i]));
    }
    va_end (va);
    return 0;
}
