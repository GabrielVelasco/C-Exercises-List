#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ponteiro
//Ex 4
void troca(int *n, int *m){
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main4()
{
    int a, b;
    printf("Digite 2 valores: \n");
        scanf("%d%d",&a,&b);
    system("cls");
    printf("\n\nValor de a: %d\n\nValor de b: %d",a,b);
    troca(&a, &b);
    printf("\n\nDps da modificacao\n");
    printf("\nValor de a: %d\n\nValor de b: %d",a,b);
    return 0;
}
