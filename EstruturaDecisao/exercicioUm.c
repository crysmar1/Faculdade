#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero inteiro qualquer: \n");

    scanf("%d",&x);

    if(x >= 0){
        printf("O numero %d eh maior ou igual a zero\n\n", x);
    }

    return 0;
}
