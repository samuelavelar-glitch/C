#include <stdio.h>

int main() {
    char nome[10];
    double salario , montante , bonus;

    scanf("%10s",&nome);
    scanf("%lf",&salario);
    scanf("%lf",&montante);

    bonus = montante * 0.15 + salario;

    printf("TOTAL = R$ %.2lf\n",bonus);
    return 0;
 }
