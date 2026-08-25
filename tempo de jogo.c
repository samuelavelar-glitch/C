#include <stdio.h>

int main() {
    int hora1, minu1, hora2, minu2;
     int inicio_minutos ,  fim_minutos;
     int duracao_total , duracao_minutos , duracao_horas ;
    scanf("%d %d %d %d", &hora1, &minu1, &hora2, &minu2);
    
     inicio_minutos = hora1 * 60 + minu1;
     fim_minutos = hora2 * 60 + minu2;
    
    if (fim_minutos <= inicio_minutos) {
        fim_minutos += 24 * 60;
    }
    
    duracao_total = fim_minutos - inicio_minutos;
    
     duracao_horas = duracao_total / 60;
     duracao_minutos = duracao_total % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    
    return 0;
}
