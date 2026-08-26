#include <stdio.h>
 
int main() {
   int i = 0 , positivos = 0;
   float valor ,  media , soma = 0.0 ;
     for(i = 0 ; i < 6 ; i++ ){
         scanf("%f",&valor);
          
          if(valor > 0 ){
              positivos++;
              soma = soma + valor;
          }
         
     }
    
      media = soma /positivos;
    printf("%d valores positivos\n",positivos);
        printf("%.1f\n",media);

    return 0;
}
