
#include <stdio.h>
#include <stdlib.h>

int main6()
{
    float h, m, t, x;
    printf("digite a hr: \n");
    scanf("%f",&h);

    printf("digite os min: \n");
    scanf("%f",&m);

    t = h * 60;
    x = t + m;


    printf("tudo em min eh: \n %.0f",x);
return 0;
}
