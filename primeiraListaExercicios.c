#include "stdio.h"

void exercicioUm(){
    // Imprimir na tela, todos os números de 1 a 100, um em cada linha.
    for(int i = 1; i <= 100; i++){
        printf("%d\n",i);
    }
}
void exercicioDois(){
    //Imprimir os multiplos de 3 entre 1 e 100, um em cada linha.
        for(int i = 0; i <= 100; i = i + 3){
        if(i==0){
            continue;
        }    
        printf("%d\n",i);
        }
}

void exercicioTres(){
    //Ler um número inteiro informado pelo usuário e informar se o mesmo é par ou ímpar.
    int numeroInserido;
    printf("insira um numero inteiro : ");
    scanf("%d", &numeroInserido);
    numeroInserido%2 == 0 ? printf("par") : printf("impar");
}
void exercicioQuatro(){
    //Imprimir na tela a soma de todos os números pares de 50 a 100 (incluindo-os). O resultado deve ser 1950.
    int somaTudo = 0;
    for(int i = 50; i <= 100; i = i + 2){
        somaTudo += i;
    }
    printf("A soma dos numeros pares de 50 a 100 = : %d ", somaTudo);
}
void exercicioCinco(){
    //Solicitar ao usuário uma quantidade de segundos (unidade de tempo) e imprimir na tela a 
    //quantidade de horas, minutos e segundos que o valor inserido representa.
    int segundos = 0, horas = 0, minutos = 0;
    printf("Entre com a quantidade de segundos : ");
    scanf("%d", &segundos);
    minutos =  segundos / 60;
    printf("%d segundos equivalem a %d minutos!\n", segundos, minutos);
    horas = segundos / 3600;
    printf("%d segundos equivalem a %d horas!\n", segundos, horas);
}
void exercicioSeis(){
    //Solicitar ao usuário três números inteiros e imprimir na tela o menor deles, o maior deles, e a
    //média deles.
    int numero[2];
     for(int i = 0; i <= 2; i++){
        numero[i] = 0;
    }
    int soma = 0;
    float media = 0.0;
    for(int i = 0; i <= 2; i++){
        printf("Entre com um numero\n");
        numero[i] = scanf("%d", &numero[i]);
        soma = soma + numero[i];
    }
    media = soma / 3;
    printf("A media dos numeros é : %d", soma);
}
void exercicioSete(){
    //Solicitar ao usuário dois valores numéricos inteiros e um caractere de operação (+*-/) e
    //realizar a operação informada com os números inseridos, apresentando o resultado na tela.
    int numeroUm = 0, numeroDois = 0, resultado = 0;
    char operacao = ' ';
    printf("Entre com um numero inteiro : \n");
    numeroUm = scanf("%d", &numeroUm);
    printf("Entre com um numero inteiro : \n");
    numeroDois = scanf("%d", &numeroDois);      
    printf("Entre com a operação + ou - : \n");
    operacao = getchar();
    if(operacao == '+'){
        resultado = numeroUm + numeroDois;
        printf("\nO Resultado é %d", resultado);
    }else if(operacao == '-'){
        resultado = numeroUm - numeroDois;
        printf("\nO Resultado é %d", resultado);
    }else{
        printf("operação deve ser + ou -.");
    }
}

void exercicioOito(){
// Escrever um programa que, dada uma variável x, temos y de acordo com a seguinte regra:
// 1. se x é par: y = x / 2
// 2
// 2. se x é impar: y = 3 * x + 1
// 3. imprime y
// O programa deve então jogar o valor de y em x e continuar até que y tenha o valor final de 1.
// Por exemplo, para x = 13, a saída será: 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1.
}

int main(){
    int exercicio = 0;

    printf("Selecione o exercicio: 1-8\n");
    scanf("%d", &exercicio);

    switch (exercicio){
    case 1:
        exercicioUm();
        break;
    case 2:
        exercicioDois();
        break;
    case 3:
        exercicioTres();
        break;
    case 4:
        exercicioQuatro();
        break;
    case 5:
        exercicioCinco();
        break;
    case 6:
        exercicioSeis();
        break;
    case 7:
        exercicioSete();
        break;
    case 8:
        exercicioOito();
        break;
    default:
        printf("Selecione o exercicio: 1-8");
        break;
    }

    char c;
    scanf("%c",&c);
    return 0;
}