#include <stdio.h>
 
int main() {
        char nome[10];
      double fixo , bonus=0.15 , comissao ;
       scanf("%s", & nome);
          printf("seu nome e  %.10s\n", nome);

          fgets(nome, sizeof (nome), stdin);
        
        scanf("%lf", & fixo);
    
          comissao= fixo + fixo*bonus;
        
        printf(" \nola %s\n ", nome);

        printf(" montante = %.2lf\n",comissao);
    return 0;
}
