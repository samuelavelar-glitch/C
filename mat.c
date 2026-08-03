#include<stdio.h>
void main(){
 
      int i , j , num ,mat[5][5] ;
        printf("ola\n");
        for(i =0 ;  i<5; i++){

              for(j =0 ;  j<5; j++){
                mat[i][j] = num ;
                printf(" \tmat = %d ", mat[i][j]);     
                    scanf("%d",&mat[i][j]);
                    

        }
        printf("%.2d\n",mat[i][j]);
}
    printf("\n");
    
}
