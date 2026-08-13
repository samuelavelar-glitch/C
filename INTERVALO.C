#include <stdio.h>

int main() {

 double v  ;
 scanf("%lf",&v);
  if(v < 0.00 || v > 100){
      printf("Fora de intervalo\n");
  }
  else if(v <= 25.00){
     printf("Intervalo [0,25]");
 }
  else if(v <= 50.00){
     printf("Intervalo [25,50]");
 }
  else  if(v <= 75.00){
     printf("Intervalo [50,75]");
 }
   else  if( v <= 100.00){
     printf("Intervalo [75,100]");
 }
    return 0;
}
