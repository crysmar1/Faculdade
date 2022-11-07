#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias
e mostre-a expressa apenas em dias.*/

int main()
{
    int A, M, D, diasAno, diasMes;

    printf("### Converte anos em dias ###\n");
    scanf("%d %d %d", &A, &M, &D);

    diasAno = A * 365;
    diasMes = M * 30;



    return 0;
}
