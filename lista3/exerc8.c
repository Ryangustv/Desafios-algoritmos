#include <stdio.h>
int main(){
        float preco_normal, valor_pagar;
        char pagamento;

        printf("informe o valor: ");
        scanf("%f",&preco_normal);

        printf("informe o metodo de pagemento:\n (A) avista, dinheiro ou cheque:\n (b) avista cartao de credito:\n (c)em 2x: ");
        scanf("%f",&pagamento);

        if(pagamento=='a'){
                preco_normal=valor_pagar*0.90;
                printf("valor: %.2f",valor_pagar);
        }
        if (pagamento=='b')
        {
               preco_normal=valor_pagar*0.80;
               printf("valor: %.2f",valor_pagar);
        }
        if (pagamento=='c')
        {
                preco_normal=valor_pagar;
                printf("valor: %.2f",valor_pagar);
        }
        


}
