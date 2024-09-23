//Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada 
//(as notas tem pesos respectivos de 1, 2 e 3).
#include <stdio.h>
int main(){
    int n1, notaepeso, n2, n3, soma;
    printf("digite a nota 1: ");
    scanf("%d",&n1);
    printf("digite a nota 2: ");
    scanf("%d",&n2);
    printf("digite a nota 3: ");
    scanf("%d",&n3);

    soma = (n1 * 1) + (n2 * 2) + (n3 * 3);
    notaepeso = soma / 6;

    printf("Media ponderada: %d", notaepeso);
}