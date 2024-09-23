    //Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. 
    //Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias
#include <stdio.h>
int main(){
    int dia, mes, ano, soma;

    printf("informe o dia: ");
    scanf("%d",&dia);

    printf("informe o mes: ");
    scanf("%d",&mes);

    soma = mes * 30 - 30 + dia;

    if (dia>1 && dia<30 || mes>1 && mes<12){
        printf("se passaram exatos %d dias", soma);
    }else{
        printf("data invalida");
    }
    
}