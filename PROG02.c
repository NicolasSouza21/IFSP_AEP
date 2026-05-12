/*
A empresa Buracovias do Tietê, que administra o trecho da rodovia que liga Capivari a
Timbuktu, ganhou uma concorrência pública para a instalação de praças de pedágio e telefones
de emergência ao longo da rodovia. Os telefones de emergência serão instalados a cada 2
quilômetros e as praças de pedágio a cada 40 quilômetros. Os telefones de emergência somente
serão instalados nos locais onde não houver praças de pedágio. Construa um programa em
linguagem C que leia do teclado a distância (em quilômetros) entre Capivari e Timbuktu e
imprima na tela todos os locais (expressos em quilômetros de pista) onde deverão ser instalados
os telefones de emergência e as praças de pedágio. Assumir que a rodovia se inicia em Capivari
no quilômetro 0 (zero).
*/

#include <stdio.h>

int main()
{
    int distancia, km;

    printf("\nDigite a distancia: ");
    scanf("%i", &distancia);

    for(km = 1; km < distancia; km++)
    {
        printf("\n\nQuilometro %i", km);
        if(km % 40 == 0)
        {
            printf("\n\tPraca de pedagio");
        }
        else
        {
            if(km % 2 == 0)
            {
                printf("\n\tTelefone de emergencia");
            }
        }
    }

    return 1;
}
