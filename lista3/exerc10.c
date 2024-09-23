//Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor;
#include <stdio.h>
int main(){
    int num1, num2, diferenca;

    printf("digite um numero inteiro: ");
    scanf("%d",&num1);

    printf("digite um numero inteiro: ");
    scanf("%d",&num2);

    if(num1>num2){
        diferenca=num1-num2;
        printf("diferenca: %d",diferenca);
    }else if(num2>num1){
        printf("resultado invalido, porfavor tente novamente");
    }
    else
    {
       printf("diferenca: %d",diferenca);
    }
        
    
    
    }
    
        
    
    
