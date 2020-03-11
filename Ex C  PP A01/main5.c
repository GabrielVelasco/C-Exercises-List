#include <stdio.h>
#include <stdlib.h>

int main5()
{
    float s, g, r, i;
    printf("digite o salario:\n");
    scanf("%f",&s);

    g = 0.05 * s;
    i = 0.07 * s;
    r = (s + g) - i;
    printf("com graduacao de 5 por cento e imposto de 7 por cento, vai receber: \n %.2f",r);
return 0;
}
