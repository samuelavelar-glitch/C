#include <stdio.h>
 
int main() {
 
    int codigo_peca_1 , codigo_peca_2 ,numero_de_peças1,numero_de_peças2;
    float valor_unitario1 , valor_unitario2 , valor_1 ,valor_2 , total;
    
        scanf("%d %d %f", &codigo_peca_1,&numero_de_peças1,&valor_unitario1);
        
            
            valor_1 = (numero_de_peças1*valor_unitario1);
        
          scanf("%d %d %f", &codigo_peca_2,&numero_de_peças2,&valor_unitario2);
            
                  valor_2 = (numero_de_peças2*valor_unitario2);
                total = valor_1+valor_2;
            
                    
                      

            printf("valor A Pagar = % .2f\n " , total);
    return 0;
}
