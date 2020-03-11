#include <stdio.h>
#include <stdlib.h>

int mainB()
{
    int A[6]={1,0,5,-2,-5,7};
    int i,soma=0;
        for(i=0;i<=5;i++){
            if(A[i]==A[0] || A[i]==A[1] || A[i]==A[5]){
                soma=soma+A[i];
            }
        }
        printf("Soma de %d %d %d eh %d",A[0],A[1],A[5],soma);
    return 0;
}
int mainC(){
    int A[6]={1,0,5,-2,-5,7};
    int i,soma=0;
        printf("A4 = %d\n: ",A[4]);
        A[4]=100;
        printf("Vetor A4 vale: %d",A[4]);
    return 0;
}
int mainD(){
    int A[6]={1,0,5,-2,-5,7},i;
        for(i=0;i<=5;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
int main2(){
    int vetor[6];
    int i;
        for(i=0;i<=5;i++){
            printf("Digite a posico de A%d\n",i);
                scanf("%d",&vetor[i]);
        }
        printf("Valores sao:\n");
        for(i=0;i<=5;i++){
            printf("%d\n",vetor[i]);
        }
    return 0;
}
int main3(){
    float reais[10], quad[10];
    int i;
        for(i=0;i<=9;i++){
            printf("Digite A%d\n",i);
                scanf("%f",&reais[i]);
        }
        printf("\n");
        for(i=0;i<=9;i++){
            quad[i]=reais[i]*reais[i];
        }
        printf("\n");
        printf("\nVetor reais: \n");
        for(i=0;i<=9;i++){
        printf("%.2f ",reais[i]);
        }
        printf("\n");
        printf("\nVetor dos quadrados: \n");
        for(i=0;i<=9;i++){
            printf("%.2f ",quad[i]);
        }

    return 0;
}
int main4(){
    int i,x,y;
    int vetor[8];
        for(i=0;i<=7;i++){
    printf("Digite a pos vetor[%d]\n",i);
        scanf("%d",&vetor[i]);
    }
    printf("Digite x: \n");
        scanf("%d",&x);
    printf("Digite y: \n");
        scanf("%d",&y);
        for(i=0;i<=7;i++){
            if(x==i){
                x=vetor[i];
                printf(" X RECEBE = %d\n",x);
                break;
            }
        }
        for(i=0;i<=7;i++){
            if(y==i){
                y=vetor[i];
                printf(" Y RECEBE = %d\n",y);
                break;
            }
        }
    printf("Soma eh: %d",x+y);
    return 0;
}
int main5(){
    int i,somap=0;
    int vetor[10];
        for(i=0;i<10;i++){
            printf("Digite a pos[%d] ",i);
                scanf("%d",&vetor[i]);
        }
        for(i=0;i<10;i++){
            if(vetor[i]%2==0){
                somap=somap+1;
            }
        }
        printf("\nSao pares os valores das posicoes: \n");
        for(i=0;i<10;i++){
            if(vetor[i]%2==0){
                printf("%d ",i);
            }
        }
        printf("\n");
        printf("\nTotla de valores pares = %d\n",somap);
        return 0;
}
int main6(){
    int vetor[10];
    int i,maiorv,menorv;
    for(i=0;i<10;i++){
        printf("Digite a pos[%d] ",i);
            scanf("%d",&vetor[i]);
            if(i==0){
                maiorv=vetor[i];
            }
            if(vetor[i]>maiorv){
                maiorv=vetor[i];
            }
        }
    for(i=0;i<10;i++){
        if(i==0){
            menorv=vetor[i];
        }
        if(vetor[i]<menorv){
            menorv=vetor[i];
        }
    }
            printf("\nMaior vetor eh: %d\nMenor vetor eh: %d\n",maiorv,menorv);
    return 0;
}
int main7(){
    int vetor[10],i,maiorv,posv;
    for(i=0;i<10;i++){
        printf("Digite a pos [%d] ",i);
            scanf("%d",&vetor[i]);
        if(i==0)
            maiorv=vetor[i];
        if(vetor[i]>maiorv){
            maiorv=vetor[i];
            posv=i;
        }
    }
    printf("\nVetor: \n");
    for(i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nMaior elemento eh: %d\nEsta na pos: %d\n",maiorv,posv);
}
int main8(){
    int vet[6],i,j;
    for(i=0;i<6;i++){
        printf("Digite a pos [%d]",i);
            scanf("%d",&vet[i]);
        if(i==5){
            printf("\n");
            for(j=5;j>=0;j--){
                printf("%d ",vet[j]);
            }
        }
    }
        printf("\n");
    return 0;
}
int main9(){
    int vet[6],i,j;
    for(i=0;i<6;i++){
        printf("Digite a pos[%d] ",i);
            scanf("%d",&vet[i]);
        if(vet[i]%2!=0){
            i--;
            continue;
        }
        if(i==5){
            printf("Vetores na ordem normal: \n");
            for(j=0;j<6;j++){
            printf("%d ",vet[j]);
            }
            printf("\n");
            printf("Vetores na ordem inversa: \n");
            for(j=5;j>=0;j--){
                printf("%d ",vet[j]);
            }
        }
    }
    printf("\n");
    return 0;
}
int main10(){
    int i;
    float notas[15],soman=0;
    printf("Digite a nota de 0 a 10\n");
    for(i=0;i<15;i++){
        printf("Nota [%d] ",i+1);
            scanf("%f",&notas[i]);
            if(notas[i]<0||notas[i]>10){
                printf("\nNota invalida!\n");
                i--;
                continue;
            }
        soman=soman+notas[i];
        if(i==14){
            printf("\nA media geral eh: %.2f",soman/(i+1));
        }
    }
    return 0;
}
int main11(){
    int i,qntn=0;
    float r[10],somap=0;
    for(i=0;i<10;i++){
    printf("Digite a pos [%d]",i);
        scanf("%f",&r[i]);
    if(r[i]<0){
        qntn=qntn+1;
        }else{
        somap=somap+r[i];
        }
    }
    printf("\nVetor: \n");
    for(i=0;i<10;i++){
        printf("%.2f ",r[i]);
    }
    printf("\nQntd de num negativos: %d\nSoma dos positivos: %.2f\n",qntn,somap);
    return 0;
}
int main12(){
    int n=5,i;
    float v[n],maior,menor,media=0;
    for(i=0;i<n;i++){
    printf("Digite pos [%d]",i);
        scanf("%f",&v[i]);
    if(i==0){
        menor=v[i];
        maior=v[i];
        }
    if(v[i]<menor)
        menor=v[i];
    if(v[i]>maior)
        maior=v[i];
    media=media+v[i];
    }
    printf("\nVetor: ");
    for(i=0;i<5;i++){
        printf("%.2f ",v[i]);
    }
    printf("\n\nMaior valor eh: %.2f\nMenor eh: %.2f\nMedia eh: %.2f",maior,menor,media/n);
    return 0;
}
int main13(){
    int n=5,i,posm,posn;
    float v[n],maior,menor;
    for(i=0;i<n;i++){
        printf("Digite a pos [%d] ",i+1);
            scanf("%f",&v[i]);
        if(i==0){
            maior=v[i];
            menor=v[i];
            posn=i+1;
            posm=i+1;
        }
        if(v[i]>maior){
            maior=v[i];
            posm=i+1;
        }
        if(v[i]<menor){
            menor=v[i];
            posn=i+1;
        }
    }
    printf("\nO maior valor eh: %.2f - pos [%d]\nO menor valor eh: %.2f - pos [%d] \n",maior,posm,menor,posn);
}

int main16(){
    float v[5];
    int cod,i;
    for(i=0;i<5;i++){
        printf("digite a pos [%d] ",i);
            scanf("%f",&v[i]);
    }
    do{
    printf("Digite um codigo: ");
        scanf("%d",&cod);
            if(cod!=0&&cod!=1&&cod!=2)
                printf("\nCodigo invalido!!\n");
    }while(cod!=0&&cod!=1&&cod!=2);
    if(cod==0){
        printf("\nPrograma finalizado");
        return 0;
    }
    if(cod==1){
        printf("\nvetor na ordem direta: \n");
        for(i=0;i<5;i++){
            printf("%.2f ",v[i]);
        }
    }
    if(cod==2){
        printf("\nVetor na ordem inversa: \n");
        for(i=4;i>=0;i--){
            printf("%.2f ",v[i]);
        }

    }
}
int main17(){
    int v[10],i,contp=0,contn=0;
    for(i=0;i<10;i++){
        printf("digite a pos [%d] ",i);
            scanf("%d",&v[i]);
    }
    for(i=0;i<10;i++){
        if(v[i]<0){
            v[i]=0;
            contn=contn+1;
        }else{
        contp=contp+1;
        }
    }
    if(contp==10){
        printf("\ntodos os elementos sao maior igual a zero\n");
        return 0;
    }else{
        if(contn==10){
            printf("\nTodos sao negativos: \n");
            return 0;
        }
    }
    printf("\nValores negativos substituidos por 0\n");
    for(i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    return 0;
}
int main18(){
    int v[10],va[10],i,x,j,n=0,k=0;
    for(i=0;i<10;i++){
    printf("Digite a pos [%d] ",i);
        scanf("%d",&v[i]);
    }
    printf("Digite um num X: ");
        scanf("%d",&x);
    for(j=0;j<10;j++){
        if(v[j]%x==0){
            va[n]=v[j];
            n++;
            k=k+1;
        }
    }
    printf("\n");
    printf("Vetor dos multiplos de %d eh: ",x);
    for(i=0;i<k;i++){
        printf("%d ",va[i]);
    }
    return 0;
}
int main19(){
    int vet[50],i;
    for(i=0;i<50;i++){
        vet[i]=(i+(5*i))%(i+1);
    }
    printf("\nVetor resultante: ");
    for(i=0;i<50;i++){
    printf("%d ",vet[i]);
    }
}
int main20(){
    int vet[10],vimp[10],i,j=0;
    for(i=0;i<10;i++){
    printf("Digite um num de 0 a 50, pos [%d]: ",i);
        scanf("%d",&vet[i]);
    if(vet[i]<0||vet[i]>50){
        printf("\nNumero invalido! Digite novamente.\n");
        i--;
        }
    }
    for(i=0;i<10;i++){
        if(vet[i]%2!=0){
            vimp[j]=vet[i];
            j++;
        }
    }
    printf("\nVetor digitado: \n");
    for(i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    printf("\nVetor impares: \n");
    for(i=0;i<j;i++){
        printf("%d ",vimp[i]);
    }
    return 0;
}
int main21(){
    int A[10],B[10],C[10],i;
    for(i=0;i<10;i++){
        printf("Digite pos [%d] de A: ",i);
            scanf("%d",&A[i]);
        printf("Digite pos [%d] de B: ",i);
            scanf("%d",&B[i]);
    }
    for(i=0;i<10;i++){
        C[i]=A[i]-B[i];
    }
    printf("\nVetor C eh: \n");
    for(i=0;i<10;i++){
        printf("%d ",C[i]);
    }
}
int main22(){
    int A[10],B[10],C[20],i,j=0;
    for(i=0;i<10;i++){
        printf("Digite a pos [%d] de A e B: \n",i);
            scanf("%d %d",&A[i],&B[i]);
    }
    for(i=0;i<20;i++){
        if(i%2==0){
            C[i]=A[j];
            j++;
        }
    }
    j=0;
    for(i=0;i<20;i++){
        if(i%2!=0){
            C[i]=B[j];
            j++;
        }
    }
    for(i=0;i<20;i++){
        printf("%d ",C[i]);
    }
    return 0;
}
int main26(){
    float vet[10],m=0,var,m2=0,desvp;
    int i;
    for(i=0;i<10;i++){
        printf("Digite a pos [%d] do vetor: ",i);
            scanf("%f",&vet[i]);
        m=m+vet[i];
    }
    m=m/10;
    for(i=0;i<10;i++){
        vet[i]=vet[i]-m;
    }
    for(i=0;i<10;i++){
        vet[i]=vet[i]*vet[i];
        m2=m2+vet[i];
    }
    m2=m2/10;
    desvp=sqrt(m2);
    printf("Desvio padrao: %.2f",desvp);
    return 0;
}
//Matriz
int mainM1(){
    int mat[4][4],i,j,cont=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite a pos [%d][%d]: ",i,j);
                scanf("%d",&mat[i][j]);
            if(mat[i][j]>10)
                cont=cont+1;
        }
    }
    printf("\nMaiores que 10: %d\n",cont);
    for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int mainM2(){
    int mat[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                mat[i][j]=1;
            }else{
                mat[i][j]=0;
                }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",mat[i][j]);
        }
    printf("\n");
    }
    return 0;
}
int mainM7(){
    int mat[10][10],i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i<j){
                mat[i][j]=(2*i)+(7*j)-2;
            }else{
                if(i==j){
                    mat[i][j]=(3*(i*i))-1;
                }else{
                    if(i>j){
                        mat[i][j]=(4*(i*i*i))-((5*(j*j))+1);
                    }
                }
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int mainM8(){
    int mat[3][3],i,j,soma=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a pos [%d][%d]: ",i,j);
                scanf("%d",&mat[i][j]);
            if(i<j){
                soma=soma+mat[i][j];
            }
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma eh: %d",soma);
    return 0;
}
int mainM13(){
    int mds[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite a pos [%d][%d]: ",i,j);
                scanf("%d",&mds[i][j]);
            if(mds[i][j]<1||mds[i][j]>20){
                printf("\nERRO! Digite um num no intervalo [1,20]\n");
                j--;
            }
        }
    }
    printf("\nMatriz digitada: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",mds[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz triangular inferior:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i<j){
                mds[i][j]=0;
            }
            printf("%d ",mds[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int mainM15(){
    char resp[2][5]={'a','b','b','c','b','a','c','c','c','c'};
    char gab[5];
    int i,j,nota0=0,nota1=0;
    for(i=0;i<5;i++){
        setbuf(stdin, NULL);
        printf("Digite o gabarito da [%d] ",i);
        scanf("%c",&gab[i]);
    }
    printf("\nRepostas marcadas por cada candidato: \n");
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("%c ",resp[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            if(resp[i][j]==gab[j]){
                    if(i==0)
                        nota0=nota0+1;
                    if(i==1)
                        nota1=nota1+1;
            }
        }
    }
    printf("\nNota cand 1 = %d\nNota cand 2 = %d",nota0,nota1);
    return 0;
}
int mainM18(){
    int mat[3][3],i,j,k=0,soma=0;
    int vet[3];
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("Digite a pos [%d][%d]: ",i,j); //Continua sendo linha, coluna
                scanf("%d",&mat[i][j]);
            soma=soma+mat[i][j];
            if(i==2){
                vet[k]=soma;
                k++;
                soma=0;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nVetor somatorio das colunas: \n");
    for(i=0;i<3;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}
int mainM19(){
    int inf[5][4],i,j,maiorn=0,matr,soman=0;
    for(j=0;j<4;j++){
        for(i=0;i<5;i++){
            if(j==0){
                printf("Digite a matricula do estudante %d - pos[%d][%d]: ",i,i,j);
                    scanf("%d",&inf[i][j]);
            }
            if(j==1){
                printf("Digite a media das provas do estudante %d - pos[%d][%d]: ",i,i,j);
                    scanf("%d",&inf[i][j]);
            }
            if(j==2){
                printf("Digite a media dos trabalhos do estudante %d - pos[%d][%d]: ",i,i,j);
                    scanf("%d",&inf[i][j]);
            }
            if(j==3){
                inf[i][j]=inf[i][2]+inf[i][1];
                soman=soman+inf[i][j];
                if(i==0){
                    maiorn=inf[i][j];
                    matr=inf[i][0];
                }else{
                    if(inf[i][j]>maiorn){
                        maiorn=inf[i][j];
                        matr=inf[i][0];
                    }
                }

            }

        }
    }
    printf("\nMatriz Reultante: \nMatricula / Media Notas Provas / Media Notas Trabalho / Nota Final\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("    %d              ",inf[i][j]);
        }
        printf("\n");
    }
    printf("\nResultado final:\n");
    printf("Maior nota final: %d, matricula: %d\nMedia notas finais: %d",maiorn,matr,soman/5);
    return 0;
}
int mainM20(){
    float galo[3][6],asst[50],soma,somai=0;
    int i,j,k=0,cont=0;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("Digite a pos [%d][%d]: ",i,j);
                scanf("%f",&galo[i][j]);
            if(j%2!=0){
                asst[k]=galo[i][j];
                k++;
            }
            if(j==1||j==3){
                soma=soma+galo[i][j];
                cont++;
            }
            if(j==5){
                galo[i][j]=galo[i][0]+galo[i][1];
            }
        }
    }
    printf("\nMatriz digitada: \n");
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("%.1f        ",galo[i][j]);
        }
        printf("\n");
    }
    printf("\nElementos das colunas impares: \n");
    for(i=0;i<k;i++){
        somai=somai+asst[i];
        printf("%.2f ",asst[i]);
    }
    printf("\nSoma dos elementos da colunas impares: %.2f\nMedia dos elementos das colunas 2 e 4: %.2f\n",somai,soma/cont);
    return 0;
}
int mainM22(){
    int A[3][3], B[3][3], C[3][3],i,j;
    printf("Digite a matriz A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a pos[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
        }
    }
    printf("\nDigite a matriz B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a pos[%d][%d]: ",i,j);
                scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]*B[i][j];
        }
    }
    printf("\nMatriz A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz C=(A*B): \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int mainM23(){
    int A[3][3], B[3][3],i,j;
    printf("Digite a matriz A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a pos[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            B[i][j]=A[i][j]*A[i][j];
        }
    }
    printf("\nMatriz A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B=A*A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int mainJDVELHA(){
    int velh[3][3]={0,0,0,0,0,0,0,0,0};
    int i,j,l,c,cont2=0;
    int vez=1,cont=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",velh[i][j]);
        }
        printf("\n");
    }
//
//
            while(vez==1||vez==-1){
        for( ;vez==1; ){
    if(cont==9){
        printf("\n\nJOGO ACABOU! VELHA!\n");
        return 0;
        }
    printf("\n[1] Digite a linha e coluna que deseja jogar: \n");
        scanf("%d%d",&l,&c);
        if(velh[l][c]==1||velh[l][c]==-1){
            printf("\nPosicao invalida!\n");
            continue;
        }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(l==i&&c==j){
                velh[i][j]=1;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d    ",velh[i][j]);
        }
        printf("\n");
    }
    for(j=0,cont2=0;j<3;j++){
        for(i=0;i<3;i++){
            if(velh[i][j]==1){
                cont2=cont2+1;
                if(cont2==3){
                    printf("\n1 ganhou na vertical\n");
                    return 0;
                }
            }
            if(i==2){
                cont2=0;
            }
        }
    }
    for(i=0,cont2=0;i<3;i++){
        for(j=0;j<3;j++){
            if(velh[i][j]==1){
                cont2=cont2+1;
                if(cont2==3){
                    printf("\n1 ganhou na horizontal\n");
                    return 0;
                }
            }
        }
        cont2=0;
    }
    for(i=0,cont2=0,j=0;i<3;i++,j++){
        if(velh[i][j]==1){
            cont2=cont2+1;
            if(cont2==3){
                printf("\n1 ganhou na diagonal principal\n");
                return 0;
            }
        }
    }
    for(i=0,j=2,cont2=0;i<3;i++,j--){
        if(velh[i][j]==1){
            cont2=cont2+1;
            if(cont2==3){
                printf("\n1 ganhou na diagonal secundaria\n");
                return 0;
            }
        }
        if(i==2&&j==0){
            cont2=0;
        }
    }
    cont=cont+1;
    vez=-1;
        }
//
//
        for( ;vez==-1; ){
    if(cont==9){
        printf("\n\nJOGO ACABOU! VELHA!\n");
        return 0;
        }
    printf("\n[-1] Digite a linha e coluna que deseja jogar: \n");
        scanf("%d%d",&l,&c);
        if(velh[l][c]==1||velh[l][c]==-1){
            printf("\nPosicao invalida!\n");
            continue;
        }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(l==i&&c==j){
                velh[i][j]=-1;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d   ",velh[i][j]);
        }
        printf("\n");
    }
    for(j=0,cont2=0;j<3;j++){
        for(i=0;i<3;i++){
            if(velh[i][j]==-1){
                cont2=cont2+1;
                if(cont2==3){
                    printf("\n-1 ganhou na vertical\n");
                    return 0;
                }
            }
            if(i==2){
                cont2=0;
            }
        }
    }
    for(i=0,cont2=0;i<3;i++){
        for(j=0;j<3;j++){
            if(velh[i][j]==-1){
                cont2=cont2+1;
                if(cont2==3){
                    printf("\n-1 ganhou na horizontal\n");
                    return 0;
                }
            }
        }
        cont2=0;
    }
    for(i=0,cont2=0,j=0;i<3;i++,j++){
        if(velh[i][j]==-1){
            cont2=cont2+1;
            if(cont2==3){
                printf("\n-1 ganhou na diagonal principal\n");
                return 0;
            }
        }
    }
    for(i=0,j=2,cont2=0;i<3;i++,j--){
        if(velh[i][j]==-1){
            cont2=cont2+1;
            if(cont2==3){
                printf("\n-1 ganhou na diagonal secundaria\n");
                return 0;
            }
        }
        if(i==2&&j==0){
            cont2=0;
        }
    }
    cont=cont+1;
    vez=1;
        }
    }
    return 0;
}
int main(){
    int vet[10],vas[10],vas2[10],i,j,k=0,q,n;
    for(i=0;i<10;i++){
        scanf("%d",&vet[i]);
        vas[i]=vet[i];
    }
    printf("\n\n\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                continue;
            }
            if(vas[i]==vet[j]){
                for(n=0;n<k;n++){
                    if(vet[i]==vas2[n]){
                        q=1;
                        n=99;
                    }
                }
            if(q==1){
                j=10;
                continue;
            }else{
             vas2[k]=vet[i];
             k++;
             j=10;
            }
        }
    }
    }
        printf("\n\n\n");
        for(i=0;i<k;i++){
        printf("%d",vas2[i]);
    }
}
