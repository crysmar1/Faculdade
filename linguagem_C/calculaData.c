#include <stdio.h>

int main()
{
    /* code detalhado para fins didaticos */
    int anoNasc, anoAtual, idade;

    printf("\nDigite o ano de seu nascimento: ");
    scanf("%d", &anoNasc);

    printf("\nInforme o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("Sua idade eh: %d anos", idade);

    return 0;
}
