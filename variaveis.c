#include "stdio.h"

int minhaIntGlobal = 19;

void meuOutroMetodo(){
    printf("Meu outro metodo foi executado\n");
    printf("%d\n", minhaIntGlobal);
}

int main(){
    char *c;

    int meuInt;
    meuInt = 11;
    int a, b;

    double const meuDouble = 23.75;
    char meuChar = 'd';

   // int register minhaVariavelRegister;

    printf("%d\n", meuInt);
    printf("%f\n", meuDouble);
    printf("%c\n", meuChar);

    a = b = 11;

    printf("%d\n", a);

    printf("%d\n", minhaIntGlobal);

    meuOutroMetodo();

    scanf("%c", &c);
    return 0;
}