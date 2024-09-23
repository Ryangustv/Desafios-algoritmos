#include <stdio.h>
int main(){
    float metros, soma;

    printf("informe o valor em metros: ");
    scanf("%f",&metros);

    soma = metros / 100;
    printf("valor de metro em centimetro e: %.4f", soma);
}