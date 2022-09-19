#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva um programa que repita uma entrada de dados até que 
determinada condição de saída seja atingida e,
em seguida, acumule os valores digitados.
*/
// main()
// {
//     int x; int cont = 0; int total = 0;
//     char letra;

//     do
//     {
//         printf("Digite um numero: \n");
//         scanf("%d", &x);
//         fflush(stdin);
//         cont++;
//         total = total + x;
//         printf("Digite uma letra: \n");

//     } while (letra = getchar() != 'q');
    
//     printf("Parando...\n");
//     printf("Repeticoes = %d e total = %d \n", cont, total);

//     return 0;
// }

/*Escreva um programa que receba as notas de um aluno até que a condição de saída 
se confirme e que, em seguida, calcule a média do aluno.
*/

main()
{
    int x, cont = 0, total = 0;
    char letra;
    float media;

    do
    {
        printf("Digite uma nota: \n");
        scanf("%d", &x);
        fflush(stdin);
        cont ++;
        total = total + x;
        printf("Digite uma letra qualquer ou \'q\' para encerrar: \n");

    } while (letra = getchar() != 'q');
    

    printf("Parando ...\n");
    printf("Repeticoes = %d e total das notas = %d. \n", cont, total);

    media = total/cont;
    printf("Media = %f.\n", media);

    return 0;
}
