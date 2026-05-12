/*
Suponha um elevador que suporta no máximo 400 quilos de carga para que possa funcionar
com segurança. Construa um programa em linguagem C que simule o a entrada das pessoas
neste elevador. O programa deverá ler do teclado o peso das sucessivas pessoas que entram e
avisar imediatamente quando o limite máximo de carga for atingido ou superado. Ao final
deverá ser impresso na tela a quantidade de pessoas e o peso total de todas elas.
*/

#include <stdio.h>


int main()
{

    float pesoPessoa, pesoMax = 0;

    for (int i = 1; pesoMax <400; i++ )
    {

        printf("\nDigite o peso da Pessoa %i", i);
        scanf("%f", &pesoPessoa);

        pesoMax += pesoPessoa;
    }

    printf("Peso excedido");
}
