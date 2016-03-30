/******************************************************************************
 *
 * File Name        : str_len.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 30th, 2016	
 *
 *******************************************************************************/

 /*
 ** Function to display size of string
 ** Param: string
 */
int my_strlen(char str[]){
    int i, size=0;
	for(i=0; str[i]; i++)
        size = i+1;
    return size;
}
