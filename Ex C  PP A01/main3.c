#include <stdio.h>
#include <stdlib.h>

int main3()
{
    int x, y, z;
    float a, b, c, m;

    printf("Digite a nota 1:\n");
    scanf("%d",&x);
        printf("Digite o peso 1:\n");
        scanf("%f",&a);

    printf("Digite a nota 2:\n");
    scanf("%d",&y);
        printf("Digite o peso 2:\n");
        scanf("%f",&b);

    printf("Digite a nota 3:\n");
    scanf("%d",&z);
        printf("Digite o peso 3:\n");
        scanf("%f",&c);

    m = ((x * a) + (y * b) + (z * c)) / (a + b + c);
    printf("a media ponderada eh:\n %.2f",m);
return 0;
}
