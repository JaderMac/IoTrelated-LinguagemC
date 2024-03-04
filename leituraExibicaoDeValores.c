#include "stdio.h"

int main(){
    char *c;
    int varInt = 70;
    double varDouble = 150.15;
    // Manipulando datas
    time_t agora;
    struct tm *tm_agora;
    char texto[100]; 

    //Caracteres de formatação
    printf("\n Valor de varInt (inteiro) - %d", varInt);
    printf("\n Valor de varInt (hexadecimal) - %x", varInt);
    printf("\n Valor de varInt (octal) - %o", varInt);
    printf("\n Valor de varInt (flutuante) - %f", varInt);
    printf("\n Valor de varInt(char) - %c", varInt);
    printf("\n Valor de varDouble (flutuante) - %f", varDouble);
    
    float teste = 123.456789; 
    printf("\n %f",teste );
    printf("\n %15.5f", teste);
    printf("\n %5.5f", teste);
    printf("\n %15.2f", teste);

    int testeDois = 123;
    printf("\n %3.5d", testeDois);
    printf("\n %3.3d", testeDois);
    printf("\n %10.3d", testeDois);
    printf("\n %10.5d", testeDois);

    printf("\n %20.25s", "Minha String");
    printf("\n %5.10s", "Minha String");

    // capturando valores!
    printf("\n entre com um numero inteiro");
   // scanf("%d", &varInt);
   // scanf("%c", &c);
    printf("O valor digitado foi : %d", varInt);

    printf("\n entre com um numero float");
  //  scanf("%lf", &varDouble);
  //  scanf("%c", &c);
    printf("O valor digitado foi : %lf", varDouble);

    char varchar;
    printf("\n entre com um char");
  //  scanf("%c", &varchar);
  //  printf("O valor digitado foi : %c", varchar);
    scanf("%c", &c);

    // Manipulando datas
    agora = time(NULL);
    tm_agora = localtime(&agora);
    strftime(texto, sizeof(texto), "%d/%m/%y", tm_agora);
    printf("A data de hojé é %s", texto);

    String buffer;s
    sprintf(buffer,"A data de hojé é %s", texto);

    scanf("%c", &c);
    return 0;
}