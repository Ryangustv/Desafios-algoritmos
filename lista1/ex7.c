#include <stdio.h>
int main(){
    int A, B, C;

    A = 15;
    B = 20;
    C = A;
    A = B;
    B = C;
    printf("%d, %d", A, B);
}