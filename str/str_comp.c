/******************************************************************************
*
* File Name        : str_comp.c
* Created By       : Hugo POULIQUEN
* Creation Date    : 03 13th, 2016
* Last Changed By  : Hugo POULIQUEN
* Last Change      : 03 30th, 2016	
*
*******************************************************************************/
typedef int bool;
#define true 1
#define false 0

/*
** Function to compare two strings
** Params: string
*/
char *my_strcmp(char *src1, char *src2){
    int i, j=0;
    bool equal=0;
    char *res="";
    for(i=0;src1[i];i++){
        if(src1[i] == src2[i] && equal != 0)
        equal = 1;
        else
        equal = 0;
    }
    res = "Two strings are equal";

    if(equal == 0)
    res = "Two strings aren't equal";
    return res;
}
