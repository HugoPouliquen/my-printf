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

struct flag{
    int index_flag;
    int str_list;
};

struct flag search_index_flags(char search){
    struct flag result;
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


/*void format_function(char *format, int index){
    char *flags_format;
    int index_format;
    flags_format = "#+-";
    for (int i = index; format[i]; i++){
        for (int j = 0; flags_format[j]; j++) {
        }
    }
}*/

va_list va;
void select_function(int format, va_list va,  struct flag result){
    if(format == '%')
        my_puts_char((char)(format));
    else if(format == 'c')
        my_puts_char(va_arg(va, int));
    else if(result.str_list == 1)
        str_functions[result.index_flag](va_arg(va, char*));
    else if(result.str_list == 0)
        int_functions[result.index_flag](va_arg(va, int));
    else
        my_puts_char(format);
}

int padding(int search){
    char *flags_nbr;
    int padding_ok, flags_nbr_size;
    flags_nbr = "0123456789";
    padding_ok = 0;
    flags_nbr_size = my_strlen(flags_nbr);
    for(int i=0; i < flags_nbr_size; i++){
        if(flags_nbr[i] == search){
            padding_ok = 1;
            for(int j = 0; j < i; j++){
                my_puts(" ");
            }
        }
    }
    return padding_ok;
}

int my_printf(char *format, ...){
    struct flag result;
    int padding_ok;
    va_start (va, format);
    for (int i = 0; format[i]; i++){
        if(format[i] == '%'){
            i++;
            if((format[i] == '#' && format[i+1] == 'd'))
                i++;
            else if((format[i] == '#' && format[i+1] == 'x')){
                my_puts("0x");
                i++;
            }else if((format[i] == '#' && format[i+1] == 'o')){
                my_puts_nbr(0);
                i++;
            }else if((format[i] == '0' && format[i+1] == 'd'))
                i++;
            else if((format[i] == '+' && format[i+1] == 'd')){
                my_puts("+");
                i++;
            } else if((format[i] == '-' && format[i+1] == 'd'))
                i++;
            padding_ok = padding(format[i]);
            if(padding_ok == 1)
                i++;
            result = search_index_flags(format[i]);
            select_function(format[i], va, result);
        } else
            my_puts_char(format[i]);
    }
    va_end (va);
    return 0;
}
