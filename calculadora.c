#include <stdio.h>

int main(){
  float n1 , n2 , total;
  char op;

    scanf("%f %f %c", &n1 , &n2 , &op);


     switch (op){

      case '+':
       total = n1 + n2 ;
        break;
     case '*':
      total = n1 * n2;
      break;
      case '-':
       total = n1 - n2 ;
        break;
      
      case '/':
        if(n2 !=0)
        total = n1 / n2;
       else
          printf("denominador igual a zero - erro");
        break;
      
      default:
           printf("nao reconhecida\n");
         break;

     }
       printf("Total = %.2f\n",total);

  return 0;
}

