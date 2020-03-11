#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Recursao
//1. Crie uma func¸ ˜ao recursiva que receba um n´umero inteiro positivo N e calcule o somat´ orio
//dos n´umeros de 1 a N.
int soma(int a){
    if(a == 1)
        return 1;
    return a + soma(a-1);
}

int cub(int a){
    if(a == 1)
        return 1;
    return (a*a*a) + cub(a-1);
}

int fat(int a){
    if(a == 0)
        return 1;
    return a*fat(a-1);
}

int main(){
    int n, fin, fatore, cubo;
    printf("\nDigite n: ");
        scanf("%d",&n);
    fin = soma(n);
    fatore = fat(n);
    cubo = cub(n);
    printf("\nSomatorio de 1 ate %d: %d\n",n,fin);
    printf("\nFatoria de %d: %d\n",n,fatore);
    printf("\nSoma dos cubos ate %d: %d\n",n,cubo);
}

