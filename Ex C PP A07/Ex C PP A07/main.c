#include <stdio.h>
#include <stdlib.h>
#define pi 3.0
float calc(float x)
{
    return (4*pi*x*x*x)/3;
}

void WriteLine(int x)
{
    int i;
    for(i=0; i<x; i++){
        printf("=");
    }
};

int main5()
{
    float r;
    float vol;
    printf("\nDigite o raio: \n");
        scanf("%f",&r);
    vol = calc(r);
    printf("\n%.2f",vol);
    return 0;
}

int main()
{
    int num;
    printf("\nDigite a quantidade de sinais de igual: \n");
        scanf("%d",&num);
    WriteLine(num);
    return 0;
}
