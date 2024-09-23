//Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente
#include <stdio.h>
int main(){
    int a, b, c, aux;

    printf("digite um numero1: ");
    scanf("%d",&a);

    printf("digite um numero2: ");
    scanf("%d",&b);

    printf("digite um numero3: ");
    scanf("%d",&c);

    if (a<b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(a<c)
    {
        aux=a;
        a=c;
        c=aux;
    }
    if(b<c)
    {
        aux=b;
        b=c;
        c=aux;
    }
    printf("ordem decrescente:%d,%d,%d", a, b, c);
    

   
}
