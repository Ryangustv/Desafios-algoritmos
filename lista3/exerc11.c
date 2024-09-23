#include <stdio.h>
int main(){
    int nivel, valorhora;
    float horas, total;


    printf("escolha o nivel do professor de 1 a 3: ");
    scanf("%d",&nivel);
    printf("agora informa a quantidade de horas que ele trabalhou: ");
    scanf("%f",&horas);

    if (nivel==1){
        valorhora=12;
        total= valorhora * horas * 4.5;
        printf("%.2f",total);
    }
    else if (nivel==2){
        valorhora=17;
        total= valorhora * horas * 4.5;
        printf("%.2f",total);
    }
    else if (nivel==3){
        valorhora=25;
        total= valorhora * horas * 4.5;
        printf("%.2f",total);
    }
    else{
        printf("invalido");
    }
    return 0;
    
}