#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Alocacao
//6. Fac¸a um programa que simule a mem´ oria de um computador: o usu´ ario ir ´a especificar o
//tamanho da mem´ oria, ou seja, quantos bytes ser˜ao alocados do tipo inteiro. Para tanto,
//a mem´ oria solicitada deve ser um valor m´ ultiplo do tamanho do tipo inteiro ( 4 ). Em seguida,
//o usu´ ario ter ´a 2 opc¸ ˜oes: inserir um valor em uma determinada posic¸ ˜ao ou consultar o
//valor contido em uma determinada posic¸ ˜ao. A mem´ oria deve iniciar com todos os dados
//zerados.

int main(){
    int n, *test, opt, pos, i;
    printf("\nType N: \n");
        scanf("%d",&n);
    test = (int*) malloc(n*sizeof(int));

    if(test == NULL){
        printf("\nErro!\n");
        exit(1);
    }

    for(i=0; i<n; i++){
        test[i] = 0;
    }

    printf("\nChoose one:\n(1) Insert:\n(2) Consult: ");
    do{
        scanf("%d",&opt);
    }while( (opt != 1) && (opt != 2) );

    switch(opt){
        case 1:
             system("cls");
             printf("\nYou chose (1)\n");
             printf("\nChoose position 0 to %d:\n",(n-1));
             scanf("%d",&pos);
                test[pos] = 1;
            break;
        
        case 2:
            system("cls");
            printf("\nYou chose (2)\n");
            printf("\nChoose position 0 to %d:\n",(n-1));
            scanf("%d",&pos);
                printf("\n%d\n",test[pos]);
            break;
            
    }
    for(i=0; i<n; i++){
        printf("%d ",test[i]);
    }

    free(test);
    return 0;
}
