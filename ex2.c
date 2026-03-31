#include <stdio.h>


int main(){

    float a, b ,c ,d ,e;

    printf("Digite o Valor de A:");
    scanf("%f", &a);
    printf("Digite o Valor de B:");
    scanf("%f", &b);
    printf("Digite o Valor de C:");
    scanf("%f", &c);
    printf("Digite o Valor de D:");
    scanf("%f", &d);
    printf("Digite o Valor de E:");
    scanf("%f", &e);

    float resultado = (a * b)/ (c + d - e);

    printf("\n O Resultado é %f:", resultado);








}
