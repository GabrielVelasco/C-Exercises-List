#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Alocacao
//11. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
//(a) Dever ˜ao ser armazenados, para cada aluno: matr´ıcula, sobrenome (apenas um) e
//ano de nascimento.
//(b) Ao in´ıcio do programa, o usu´ ario dever ´a informar o n´umero de alunos que ser˜ao
//armazenados
//(c) O programa dever ´a alocar dinamicamente a quantidade necess´ aria de mem´ oria
//para armazenar os registros dos alunos.
//(d) O programa dever ´a pedir ao usu´ ario que entre com as informac¸ ˜oes dos alunos.
//(e) Ao final, mostrar os dados armazenados e liberar a mem´ oria alocada.

struct students{
    int mat, year;
    char sname[50];
};

int main(){
    int numb_std, i, j;
    struct students *std;

    printf("\nNumber of students: \n");
        scanf("%d",&numb_std);

    std = (struct students*) malloc(numb_std*sizeof(struct students));
    if(std == NULL){
        printf("\nERROR!\n");
        exit(1);
    }

    for(i=0; i<numb_std; i++){
        printf("\nMat %d: ",i);
            scanf("%d",&std[i].mat);

        printf("\nYear %d: ",i);
            scanf("%d",&std[i].year);

        printf("\nName %d: ",i);
            setbuf(stdin, NULL);
            scanf("%s",std[i].sname);

        if(i == (numb_std-1)){
            system("clear");
            for(j=0; j<numb_std; j++){
                printf("\n");
                printf("\nMat %d: %d",j,std[j].mat);
                printf("\nYear %d: %d",j,std[j].year);
                printf("\nName %d: %s",j,std[j].sname);
            }
        }
    }

    free(std);
    printf("\nFree OK!\n");
    return 0;
}