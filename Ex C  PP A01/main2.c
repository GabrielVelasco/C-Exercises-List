#include <stdio.h>
#include <stdlib.h>

int main2()
{
    int x, y;
    float z, m;
    printf("Digite o valor 1:\n");
    scanf("%d",&x);

    printf("Digite o valor 2:\n");
    scanf("%d",&y);

    printf("Digite o valor 3:\n");
    scanf("%f",&z);

    m = (x + y + z) / 3;
    printf("A media dos 3 numeros eh:\n %.2f",m);
return 0;
}

