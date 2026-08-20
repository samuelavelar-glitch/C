#include <stdio.h>

int main() {

  int dia ,mes , ano , v;
     scanf("%d",&v);

       ano = v/365;
       v = v%365;
       mes = v/30;
       v = v%30;
       dia = v;

     printf("%d ano(s)\n",ano);
     printf("%d mes(es)\n",mes);
     printf("%d dia(s)\n",dia);
    return 0;
}
