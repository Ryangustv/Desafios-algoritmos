//Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resulta
#include <stdio.h>
int main(){
    int numero, par, impar;

    printf("digite um numero: ");
    scanf("%d",&numero);

    par= numero + 5;
    impar= numero + 8;

    if (numero%2==0)
    {
        printf("resultado: %d", par);
    }else{
        printf("resultado: %d", impar);
    }
    
}