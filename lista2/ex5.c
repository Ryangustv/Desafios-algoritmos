//Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do 
//litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. 
#include <stdio.h>
int main(){
    float preco, valor;
    int litros;

    preco = 5.97;

    printf("quantos reais queres colocar de gasosa?: ");
    scanf("%f",&valor);

    litros = valor/5.97;
    printf("voce abasteceu %f reais, oque gerou %d litros\n",valor, litros);
    
}