#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ex 26

int somatorio(int a){
    int i, b = 0;
    for(i=1; i<=a; i++){
        b = b + i;
    }
    return b;
}

int main(){
    int n, soma;
    scanf("%d",&n);
    soma = somatorio(n);
    printf("\n%d\n",soma);
}
