#include <stdio.h>
int main(){
    int x, y, z;

    printf("informe o comprimento x: ");
    scanf("%d",&x);

    printf("informe o comprimento y: ");
    scanf("%d",&y);

    printf("informe o comprimento z: ");
    scanf("%d",&z);

    if (x < y + z && y< x + z && z< x + y){
        if (z == y && y == x){
            printf("triangulo equilatero");
        }
    else if (z == y || x == z || y == x){
        printf("triangulo isosceles");
    }else{
        printf("triangulo escanelo");
    }
    }
    else
    {
        printf("nao e triangulo");
    }

}

