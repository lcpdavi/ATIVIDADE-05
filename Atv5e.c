#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    // Calcule as raízes da equação de 2º grau

    float A, B, C, X1, X2, Delta;

    printf("Insira A: \n");
    scanf("%f", &A);

    printf("Insira B: \n");
    scanf("%f", &B);
    
    printf("Insira C: \n");
    scanf("%f", &C);

    Delta = ((B * B) - 4 * A * C);
    X1 = ( - B + (sqrt(Delta))) / ( 2 * A); 
    X2 = ( - B - (sqrt(Delta))) / ( 2 * A);

    if( Delta < 0){
        printf("Nao existe raiz. \n");

    }else if( Delta = 0){
        printf("Raiz unica. \n");

    }

    printf("O valor de Delta e: %.2f \n", Delta);
    printf("O valor de X1 e: %.2f \n", X1);
    printf("O valor de X2 e: %.2f \n", X2);
    
}