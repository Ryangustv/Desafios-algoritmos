//Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso 
//contrário multiplique A por B. Ao final, apresente o resultado. 
#include <stdio.h>
int main(){
    int A, B, soma, multiplicacao;
    
    printf("informe o numero: ");
    scanf("%d",&A);

    printf("informe o numero: ");
    scanf("%d",&B);

    soma = A+B;
    multiplicacao = A*B;


    if (A==B)
    {
        printf("soma:%d",soma);
    }else{
        printf("multiplicacao:%d",multiplicacao);
    }
    

}