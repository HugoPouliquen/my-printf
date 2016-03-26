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

/*
**Function to display a number
** Param: number
*/
int my_put_nbr(int nbr){
    int i, nbr_ascii=0, nbr2=0, *nbr1_prt=0, *nbr2_prt=0;
    if(nbr<10){
        nbr_ascii = nbr + 48;
        nbr1_prt = &nbr_ascii;
        write(1,&nbr1_prt[0],1);
    } else{
        i=0;
        nbr_ascii = nbr;

        while(nbr_ascii>10){
            nbr_ascii = nbr_ascii/10;
            i++;
        }
        nbr2 = nbr_ascii * pow(10,i);
        nbr = nbr - nbr2;
        nbr_ascii = nbr_ascii + 48;
        nbr1_prt = &nbr_ascii;
        write(1,&nbr1_prt[0],1);
        my_put_nbr(nbr);
    }
}
