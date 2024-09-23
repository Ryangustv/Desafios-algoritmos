#include <stdio.h>
int main(){
    float paozinho, broa, total, poupanca, lucroliquid;
    int quantpaozinho, quantbroa;

    paozinho = 0.12;
    broa = 1.50;

    printf("total de broa: ");
    scanf("%d",&quantbroa);

    printf("total de paozinho: ");
    scanf("%d",&quantpaozinho);

    total = (quantbroa*broa) + (quantpaozinho*paozinho);
    poupanca =  total * 0.10;
    lucroliquid= total - poupanca;
     printf("lucros totais: %.2f\n", total);
     printf("poupanca (10%% do total): %.2f\n", poupanca);
     printf("lucroliquid: %.2f\n", lucroliquid);
    
    return 0;
}