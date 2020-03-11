#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//https://www.urionlinejudge.com.br/judge/en/problems/view/1762
struct Dados{
    char N[50];
    float K;
};

int main(){
    int Y, T, J, verf = 0, indic, i;
    float M, TOTAL = 0;
    char P[50];
    scanf("%d", &Y);

    while( Y > 0 ){
        scanf("%d", &T);
        struct Dados *lista_brinquedos = (struct Dados *) malloc(T*sizeof(struct Dados));
        for(i = 0; i < T; i++){
            setbuf(stdin, NULL);
            gets(lista_brinquedos[i].N);
            do{
                scanf("%f", &lista_brinquedos[i].K);
            }while( lista_brinquedos[i].K <= 0 || lista_brinquedos[i].K > 100 );
        }
        do{
            scanf("%f", &M);
        }while( M <= 0 || M > 100 );

        while(1){
            setbuf(stdin, NULL);
            gets(P);
            if(P[0] == '-'){
                scanf("%d", &J);
                if(J == 0)
                    break;
            }

            for(i = 0; i < T; i++){
                if( strcmp(P, lista_brinquedos[i].N) == 0 ){
                    verf = 1;
                    indic = i;
                    break;
                }
            }
            if(verf == 0){
                printf("NAO LISTADO: %s\n", P);
                continue;
            }

            do{
                scanf("%d", &J);
            }while( J <= 0 || J > 100 );
            TOTAL = TOTAL + (lista_brinquedos[indic].K * J);

            verf = 0;
        }
        printf("Peso total: %.2f kg\n", TOTAL);
        printf("Numero de trenos: %.0f\n", (TOTAL / M) + 1 );

        Y--;
        free(lista_brinquedos);
        TOTAL = 0;
    }

    return 0;
}