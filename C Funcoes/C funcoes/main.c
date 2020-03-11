#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ex 10
int biggest(int a, int b){
    int c=b;
    if(a>c)
        return a;
    else
        return c;
};

int main10()
{
    int num1, num2;
    printf("num 1: \n");
        scanf("%d",&num1);
    printf("num 2: \n");
        scanf("%d",&num2);

    printf("\nMaior eh: %d",biggest(num1, num2));
    return 0;
}
