#include <stdio.h>
void main(){
    float raio, pi, soma;
    
    pi = 3.14;
    
    printf("digite o valor do raio1: ");
    scanf("%f",&raio);
    soma = (raio * raio) * pi;
    printf("valor da area do circulo e: %.2f", soma);
}