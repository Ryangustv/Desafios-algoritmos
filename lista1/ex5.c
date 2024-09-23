#include <stdio.h>
int main(){
    float n1, n2, n3, peso1, peso2, peso3, media;

    printf("informe a nota1: ");
    scanf("%f",&n1);
    printf("informe o peso (quantas pessoas tiraram a nota1) : ");
    scanf("%f",&peso1);

    printf("informa a nota2: ");
    scanf("%f",&n2);
    printf("informe o peso (quantas pessoas tiraram a nota2) : ");
    scanf("%f",&peso2);

    printf("informe a nota3: ");
    scanf("%f",&n3);
    printf("informe o peso (quantas pessoas tiraram a nota3) : ");
    scanf("%f",&peso3);

    media = (peso1 * n1 + peso2 * n2 + peso3 *n3)/3;
    printf("a media das notas e: %.2f", media);
    }


    