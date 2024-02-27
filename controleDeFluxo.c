#include "stdio.h"

int main(){
    char c;
    int x = 5;
    if(x >= 5){
        printf("X é igual a 5 ou mais!\n\n");
    }
    int y;
    y = x % 2 == 0 ? 0 : 1;
    printf("%d\n",y);

    switch (y)
    {
    case 0:
        printf("X é par\n");
        printf("y é 0\n");
        break;
     case 1:
        printf("X é impar \n");
        printf("y é 1\n");
        break;
    default:
        break;
    }

    for(int i = 0; i < 10; i++){
        if(i==3){
            continue;
        }
         printf(" %d ",i);
    }
    printf("\n");

    int k = 0;
    while(k < 10){
        printf("k é igual a %d\n", k);

        k++;
    }
    printf("\n");
    int t = 0;
    do{
       printf("t é igual a %d\n", t);
       t++; 
    }while(t<=10);
    printf("\n");

    int j = 15, l = 10;
    if(j==15 && l==10){  //E
        printf("Duas condições atendidas!\n", t);
    }

    if(j==15 || l==11){ //ou
        printf("Pelo menos uma condição atendida!\n", t);
    }

    

    scanf("%c",&c);
    return 0;
}