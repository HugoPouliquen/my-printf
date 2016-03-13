/******************************************************************************
 *
 * File Name        : str_copy.c
 * Created By       : Hugo POULIQUEN
 * Creation Date    : 03 13th, 2016
 * Last Changed By  : Hugo POULIQUEN
 * Last Change      : 03 13th, 2016
 * Purpose          : Description
 *
 *******************************************************************************/

 /*
 ** Function to copy source in destination
 ** Param: string, string
 */
char my_strcpy(char *src, char *dest){
	int i;
	char *dest_final="";

	dest_final = malloc(my_strlen(src));

	for(i=0;src[i];i++){
		dest_final[i] = src[i];
	}
	dest_final[i]='\0';
	my_puts(dest_final);
	free(dest_final);
}

/*
** Function to copy source in destination with n it' size
** Param: string, string, int
*/
char my_strncpy(char *src, char *dest, int n){
	int i, j=0;
	char *dest_final="";

	if(n>my_strlen(src))
		n=my_strlen(src);
	dest_final = malloc(my_strlen(dest) + n);

	for(i=0;i<n && src[i];i++)
		dest_final[i] = src[i];
	j=n;

	for(i=0;dest[i];i++){
		dest_final[j] = dest[i];
		j++;
	}
	dest_final[j]='\0';
	my_puts(dest_final);
	free(dest_final);
}
