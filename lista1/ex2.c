#include <stdio.h>
int main(){
    int n1, n2, n3, soma;

    printf("digite um numero: ");
    scanf("%d",&n1);
    printf("digite outro numero: ");
    scanf("%d",&n2);
    printf("digite outro numero: ");
    scanf("%d",&n3);

    soma = (n1+n2+n3)/3;
    printf("a media foi: %d", soma);
}