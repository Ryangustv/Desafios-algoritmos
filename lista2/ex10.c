//Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para 
//converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. 

#include <stdio.h>
int main(){
    int mes, dias, ano, tempo;

    printf("Informe quanto tempo estamos sem acidentes: "),
    scanf("%d",&tempo);
     
    ano = tempo / 360;
    mes = (tempo % 360)/30;
    dias = (tempo % 360)%30;    

    printf("passaram se %d anos, %d meses e %d dias.", ano, mes, dias);


}