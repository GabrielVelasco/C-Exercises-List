#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//17. Fac¸a um programa que leia um arquivo que contenha as dimens˜oes de uma matriz (linha
//e coluna), a quantidade de posic¸ ˜oes que ser˜ao anuladas, e as posic¸ ˜oes a serem anuladas
//(linha e coluna). O programa l ˆe esse arquivo e, em seguida, produz um novo arquivo
//com a matriz com as dimens˜oes dadas no arquivo lido, e todas as posic¸ ˜oes especificadas
//no arquivo ZERADAS e o restante recebendo o valor 1.
//Ex: arquivo “matriz.txt”
//3 3 2 /*3 e 3 dimens~oes da matriz e 2 posic~oes que ser~ao anuladas*/
//1 0
//1 2 /*Posic~oes da matriz que ser~ao anuladas.
//arquivo “matriz saida.txt”
//sa´ıda:
//1 1 1
//0 1 0
//1 1 1
void create_matrix(int L, int C){
    FILE *p = fopen("arq2.txt", "w");
    if(p == NULL){
        printf("\nError at opening arq2");
        system("pause");
        exit(1);
    }
    int i, j;
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            fprintf(p, "%d ",1);
        }
        if(i != (L-1) )
            fputc('\n', p);
    }
    fclose(p);
}

void put_zero(int canc_L, int canc_C, int L, int C){
    int i, j;
    FILE *arc = fopen("arq2.txt", "r+");
    if(arc == NULL){
        printf("\nError at opening arq2");
        system("pause");
        exit(1);
    }

    for(i=0 ; i<L; i++){
        for(j=0; j<C; j++){
            if(i == canc_L && j == canc_C){
                fprintf(arc, "%d", 0);
                fseek(arc, 1, SEEK_CUR);
            }else{
                fseek(arc, 2, SEEK_CUR);
                if(j == (C-1) )
                    fseek(arc, 2, SEEK_CUR);
            }
        }
    }
    fclose(arc);
}

int main(){
    FILE *arc1 = fopen("arq.txt", "r");
    if(arc1 == NULL){
        printf("\nError at opening the files.");
        exit(1);
    }

    int line, column, qt_pos_canc;
    fscanf(arc1, "%d %d %d", &line, &column, &qt_pos_canc);
    create_matrix(line, column);

    int cont = 0, c_line, c_column;

    while(cont < qt_pos_canc){
        fscanf(arc1, "%d %d", &c_line, &c_column);
        put_zero(c_line, c_column, line, column);
        cont++;
    }

    fclose(arc1);
    return 0;
}