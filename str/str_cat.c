/******************************************************************************
 *
 * File Name        : str_cat.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 13th, 2016
 * Purpose          : Description
 *
 *******************************************************************************/
 /*
 ** Function to concat src & dest in dest
 ** Param: string, string
 */
char my_strcat(char *src, char *dest){
	int i, j=0;
	char *dest_final = "";

	dest_final = malloc(my_strlen(dest) + my_strlen(src));

	for(i=0;dest[i];i++)
		dest_final[i] = dest[i];
	j=my_strlen(dest);

	for(i=0;src[i];i++){
		dest_final[j] = src[i];
		j++;
	}
    dest_final[j+1]= '\0';
	my_puts(dest_final);
	free(dest_final);
}

/*
** Function to concat src & dest in dest with n size
** Param: string, string, int
*/
char my_strncat(char *src, char *dest, int n){
	int i, j=0;
	char *dest_final="";

	if(n>my_strlen(src))
		n=my_strlen(src);
	dest_final = malloc(my_strlen(dest) + n);

	for(i=0;dest[i];i++)
		dest_final[i] = dest[i];
	j=my_strlen(dest);

	for(i=0;i<n && src[i] != '\0';i++){
		dest_final[j] = src[i];
		j++;
	}
	dest_final[j]='\0';
	my_puts(dest_final);
	free(dest_final);
}
