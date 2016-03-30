/******************************************************************************
 *
 * File Name        : str_capitalize.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 30th, 2016	
 *
 *******************************************************************************/

/*
 ** Function to transform word in uppercase
 ** Param: string
 */
char my_strcapitalize(char str[]){
    int i;
    char str2[] = " ";
    for(i=0; str[i]; i++)
        str2[i] = str[i] - 32;
    write(1, str2 , my_strlen(str));
}
