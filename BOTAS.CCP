#include <stdio.h>
 
int main() {
 
   int n ;
 while (scanf("%d",&n)!=EOF){
    int  pares=0;
    int direito[61]={0};
    int esquerdo[61]={0};
     for(int i= 0 ; i<n; i++ ){
        int numero;
        char lado;
        scanf("%d %c",&numero ,&lado); 
         if(lado == 'D'){
            direito[numero]++;
         }else if(lado =='E'){
             esquerdo[numero]++;
         }
     }
 
   for(int m = 30 ; m<=60;m++){
       if(direito[m] < esquerdo[m]){
           pares+=direito[m];
       }else{
          pares+=esquerdo[m];

       }
   }
       printf("%d\n",pares);
   
 } 
    return 0;
}
