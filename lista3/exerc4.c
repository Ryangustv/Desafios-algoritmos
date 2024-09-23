//Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado
#include <stdio.h>
int main(){
    int  numero, tripple, dobro;

    printf("text to number: ");
    scanf("%d",&numero);

    dobro= numero*2;
    tripple= numero*3;


    if (numero>0)
    {
        printf("dobro:%d",dobro);
    }
    else{
        printf("triplo:%d",tripple);
    }
    
}