//Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética 
//obtida pelo aluno. Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por not
#include <stdio.h>
int main(){
    char RA;
    float nota1, nota2, nota3, media;

    printf("informe o id do aluno: ");
    scanf("%s",&RA);

    printf("insira a nota 1: ");
    scanf("%f",&nota1);
    
    printf("insira a nota 2: ");
    scanf("%f",&nota2);

    printf("insira a nota 3: ");
    scanf("%f",&nota3);

    media= (nota1+nota2+nota3)/3;

  if (media>=7.0)
  {
    printf("aprovado direto\n");
  }else if (media>=4.0){
    printf("ficou de recuperacao\n");
  }else{
    printf("reprovado");
  }
  
  
  
    

    
    



    }