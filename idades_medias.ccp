#include <stdio.h>

int main() {

      int idade=0, qtd=0 , soma=0;
       float media=0.0;

     while(idade >= 0){

             scanf("%d",&idade);
             if(idade>0.0){
             qtd++;
             soma+=idade;
            
             }
             media = soma/qtd;
         }


     printf("%.2f\n",media);



    return 0;
}
