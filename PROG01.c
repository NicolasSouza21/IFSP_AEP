/*
Existe uma lenda que diz que um rei, que estava muito feliz com o sábio da côrte pois este
havia inventado o jogo de xadrez e, como recompensa, decidiu conceder a ele a escolha de um
prêmio qualquer que desejasse. O sábio pensou e escolheu receber grãos de trigo contabilizados
de maneira proporcional aos 64 quadrados do tabuleiro do jogo. A conta deveria ser a seguinte:
1 grão no 1º quadrado; o dobro de grãos do 1º quadrado no 2º quadrado; o dobro de grãos do 2º
quadrado no 3º quadrado e assim por diante, até atingir o 64º quadrado. Construa um
programa em linguagem C que calcule a quantidade de grãos que o sábio finalmente esperava
receber. Obs: a lenda termina dizendo que o rei não ficou nada satisfeito com o resultado final e
mandou decapitar o sábio.
*/

#include <stdio.h>


int main(){
     double graosProduzidos = 1;



    for(int i = 1; i <= 64; i++){
        graosProduzidos *= 2;
        printf("\n Grãos Produzidos %f ", graosProduzidos);

    }



}
