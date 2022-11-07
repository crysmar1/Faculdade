#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int m, s, a, d, i;

    printf("Tabuada de 5\n");
    for ( i = 1; i <= 10; i++)
    {
        a = 5 + i;
        printf("5 + %d = %d\n", i, a);

        m = 5 * i;
        printf("5 X %d = %d\n", i, m);
    }

    return 0;
}
