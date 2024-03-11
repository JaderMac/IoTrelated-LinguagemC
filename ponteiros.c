#include "stdio.h"
#include "stdlib.h"

void somaUmValorNormal( int a){
    a = a + 1;
}

void somaUmPonteiro(int*i){
    *i = *i + 1;
}


int main(){
    char *c;
    
    int a, b;

    //uso tradicional
    a = 5;
    b = a;
    a = 8;
    printf("\na = %d \nb = %d", a, b);
    printf("\nendereço de a = %d \nendereço de b = %d", &a, &b);

    // ponteiro
    int *pi = NULL;
    int **ppi = NULL;
    pi = &a;
    ppi = &pi;
    printf("\nendereço pi = %d \nendereço de a = %d", *pi, &a);
    printf("\nendereço ppi = %d", **ppi);

    // passagem por valor
    int d = 5;
    somaUmValorNormal(a);
    printf("\nsoma normal = %d", d);

    // passagem por referência
    somaUmPonteiro(&d);
    printf("\nsoma ponteiro = %d", &d);

    // alocação dinamica de memoria
    int *matrizInteiros = (int *) malloc(5 * sizeof(int)); 
    if (!matrizInteiros)
    {
        printf("Erro!");
    }
    matrizInteiros[0] = 5;
    matrizInteiros[1] = 10;
    
    printf("posição 0 = %d\nposição 1 = %d", matrizInteiros[0], matrizInteiros[1]);
    
    free(matrizInteiros);
 
    scanf("%c", &c);
    return 0;
}
