//O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o 
//peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já
//desconte o peso do prato
#include <stdio.h>
int main(){
    float quilo, prato, valortot;

    printf("informe quantos kilos deu seu prato: ");
    scanf("%f",&prato);
    
    quilo = 12.00;
    valortot = prato * quilo;

    printf("o valor a pagar pelo prato e: %.2f ", valortot);
    
}