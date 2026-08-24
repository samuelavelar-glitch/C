#include <stdio.h>
 
int main() {
 
  int hora1 , minu1, hora2 , minu2 , temp1 , temp2;
 
  scanf("%d %d", &hora1 ,&minu1);
     
     scanf("%d %d", &hora2 ,&minu2);
     
     if(hora1 ==  hora2 && minu1 == minu2){
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
         return 0;
     }
        
   else  if(hora1 <  hora2 && minu1 < minu2){
         temp1 = (hora2-hora1);
            temp2 = (minu2-minu1);
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",temp1 , temp2);
         
     }
     
     else  if(hora1 >  hora2 || minu1 > minu2){
         temp1 = (hora1-hora2 + 24);
            temp2 = (minu1-minu2);
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",temp1 , temp2);
     }
 
 
    return 0;
}
