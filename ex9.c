//Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida 
//respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de 
//camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor 
//arrecadado
#include <stdio.h>
int main(){
    int p, qntp, m, qntm, g, qntg, valortot;

    p = 10;
    m = 12;
    g = 15;

    printf("informe a quantidade de camisas p: ");
    scanf("%d",&qntp);
    printf("informe a quantidade de camisas m: ");
    scanf("%d",&qntm);
    printf("informe a quantidade de camisas g: ");
    scanf("%d",&qntg);

    valortot = (qntp * p) + (qntm * m) + (qntg * g);
    printf("o valor total de todas as vendas de camisas e: %d", valortot); 
}