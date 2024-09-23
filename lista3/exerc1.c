#include <stdio.h>
int main(){
    float a, b;
    
    printf("digite o valor de A: ");
    scanf("%f",&a);

    printf("digite o valor de B: ");
    scanf("%f",&b);
    
    if (a>b)
    {
        printf("o maior valor e: %0.f",a);
    
    }else{
        printf("o maior valor e: %0.f",b);
    }

}