#include <stdio.h>

int main() {

    int h1 , h2 , m1 , m2 , total , totalm;

        scanf("%d %d %d %d" , &h1 , &m1 , &h2 , &m2);
                if(h1 == h2 && m1 == m2){

                    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");


                }
                   else if(h1 < h2 && m1 == m2){

                        total = h2-h1;
                        totalm = m2-m1;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                    else if(h1 == h2 && m1 < m2){

                        total = h2-h1;
                        totalm = m2-m1;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                    else if(h1 > h2 && m1 > m2){

                        total = (24 - h1 ) + h2 - 1;
                        totalm = (60-m1) + m2;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                     else if(h1 < h2 && m1 < m2){

                        total = h2-h1;
                        totalm = m2-m1;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                  else if(h1 > h2 && m1 < m2){

                        total = ((24 - h1)+ h2);
                        totalm = m2-m1;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }

                    else if(h1 > h2 && m1 == m2){

                        total = ((24 - h1 ) + h2);
                        totalm = m2-m1;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                    else if(h1 == h2 && m1 > m2){

                        total = (24 + h2-h1) - 1;
                        totalm = (60 - m1)+m2;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }
                else if(h1 < h2 && m1 > m2){

                        total = (h2-h1) - 1 ;
                        totalm = (60 - m1)+m2;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total , totalm );


                }

    return 0;
}
