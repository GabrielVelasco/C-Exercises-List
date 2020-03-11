#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ex 11
float calc(int a, int b, int c, char l){
    int p1=5,p2=3,p3=2;
    if(l=='A'||l=='a'){
        return (a+b+c)/3.0;
    }
    if(l=='P'||l=='p'){
        return ((a*p1)+(b*p2)+(c*p3))/10.0;
    }
};

int main11(){
    int n1,n2,n3;
    char letra;
    float result;
    printf("Digite as 3 notas: \n");
        scanf("%d %d %d",&n1, &n2, &n3);
    printf("\nDigite uma letra A ou P: \n");
    setbuf(stdin, NULL);
        letra = getchar();
    result = calc(n1,n2,n3,letra);
    printf("\n%.2f\n",result);
}
