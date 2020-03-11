#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, n, a;
    printf("digite o salario:\n");
    scanf("%f",&s);

    printf("digite a porcentagem do aumento: \n");
    scanf("%f",&a);

    a = (a / 100) + 1;

    n = s * a;
    printf("novo salario eh:\n %.2f",n);
return 0;
}

