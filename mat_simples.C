int main()
{
  int mat[5][5];
int i,j;
     for(i=0 ; i<5 ; i++){
            
             for(j=0 ; j<5 ; j++){
            printf(" QUAL NUMERO DESEJA ACESSAR[%d][%d]", i,j);
                 scanf("%d",&mat [i][j]);
             }  
                                            
     }
        for(i=0 ; i<5 ; i++){
            
             for(j=0 ; j<5 ; j++){
            printf("%d",mat [i][j]);
            
       
             }
            printf("\n");
     
        }
   

    return 0;
}
