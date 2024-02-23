#include "stdio.h"

void meuOutroMetodo(){
    printf("Meu outro metodo foi executado");
}

int main(){
    char *c;

    int meuInt;
    meuInt = 10;

    double meuDouble = 23.75;
    char meuChar = 'd';

    printf("%d\n", meuInt);
    printf("%f\n", meuDouble);
    printf("%c\n", meuChar);

    meuOutroMetodo();

    scanf("%c", &c);
    return 0;
}