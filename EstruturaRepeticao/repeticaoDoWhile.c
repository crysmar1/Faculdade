#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    numero = 1;

    do
    {
        printf("%d\n", numero);
        numero = numero + 1;
    } while (numero <= 10);

    return 0;
}
