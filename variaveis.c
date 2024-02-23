#define MINHA_DIR 3

#ifdef MINHA_DIR
    // ....
#endif

#if MINHA_DIR == 3
    #define MINHA_DIR_2 2
#elif MINHA_DIR == 4
    #include "stdlib.h"
#else
    #define MINHA_DIR_3 3
#endif

#error funcoes inacabadas - jader machado

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
    float meuFloat = 10.0;

   // int register minhaVariavelRegister;

    meuFloat = meuFloat * MINHA_DIR;

    printf("%d\n", meuInt);
    printf("%f\n", meuDouble);
    printf("%c\n", meuChar);
    printf("%f\n", meuFloat);

    a = b = 11;

    printf("%d\n", a);

    printf("%d\n", minhaIntGlobal);

    meuOutroMetodo();

    printf("%d\n", MINHA_DIR_2);


    scanf("%c", &c);
    return 0;
}