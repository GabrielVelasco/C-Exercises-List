
#include <stdio.h>
#include <stdlib.h>

int main7()
{
    int n, a, i, f, x;
    printf("ano nasc: \n");
    scanf("%d",&n);

    printf("digite o ano atual: \n");
    scanf("%d",&a);

    i = a - n;
    printf("vc tem %d anos \n",i);

    printf("qnts anos faltam para 2020? \n");
    scanf("%d",&x);


    f = i + x;

    printf("em 2020 vc tera %d anos",f);
return 0;
}

