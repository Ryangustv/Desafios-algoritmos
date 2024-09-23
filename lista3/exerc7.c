#include <stdio.h>
int main(){
    float pesoideal, altura;
    char sexo;

    printf("informe seu sexo (M para masculino e F para feminino): ");
    scanf("%s",&sexo);

    printf("informe sua altura: ");
    scanf("%f",&altura);

    if (sexo== 'M' ||  sexo== 'M')
    {
        pesoideal = (72.7 * altura) - 58;
    }else if (sexo== 'F' ||  sexo== 'F')
    {
        pesoideal = (62.1 * altura) - 44.7;
    }else{
        printf("sexo invalido, insira F ou M para masculino ou feminino: ");
        return 1;
    }
    printf("o peso ideal e %.2f", pesoideal);
    

    

    

}
