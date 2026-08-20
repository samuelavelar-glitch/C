#include <stdio.h>

int main() {
    int codigo_peca1, codigo_peca2;
    int numero_de_pecas1, numero_de_pecas2;

    float valor_unitario1, valor_unitario2;
    float valor_1, valor_2, total;

        scanf("%d %d",&codigo_peca1,&numero_de_pecas1);
          scanf("%f",&valor_unitario1);

            valor_1 = numero_de_pecas1*valor_unitario1;

          scanf("%d %d", &codigo_peca2,&numero_de_pecas2);
            scanf("%f",&valor_unitario2);
                  valor_2 = numero_de_pecas2*valor_unitario2;
                total = valor_1+valor_2;
              printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
