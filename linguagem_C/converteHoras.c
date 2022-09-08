#include<stdio.h>

int main()
{
    /* code detalhado para fins didaticos */

    int horas, minutos, total;

    printf("\nDigite uma quantidade de Horas: ");
    scanf("%d : %d", &horas, &minutos);

    total = (horas * 60) + minutos;

    printf("Qtde minutos = %d", total);

    return 0;
}
