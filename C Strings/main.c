#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main7()
{
    char a1[10],a2[10];
    int i, comp=0;
    printf("Digite as strings: ");
    gets(a1);
    gets(a2);
    if(strlen(a1)==strlen(a2)){
        for(i=0; a1[i]==a2[i] && a1[i]!='\0' && a2[i]!='\0'; i++){
            comp=comp+1;
        }
        if(comp==strlen(a1)){
            printf("Sao iguais.");
        }else{
            printf("Sao diferentes.");
            return 0;
        }
    }else{
        printf("Sao diferentes.");
    }
    return 0;
}
int main8(){
    char str[10];
    int i,cont=0;
    printf("Digite a string: ");
        gets(str);
    for(i=0; str[i]!='\0' ;i++){
        if(str[i]=='1'){
            cont=cont+1;
        }
    }
    if(cont==0){
        printf("Nao tem nenhum num 1 na string");
        return 0;
    }
    printf("\nNumero de 1s que aparece eh: %d\n",cont);
}
int main9(){
    char str1[10];
    int i;
    printf("Digite a string: ");
        gets(str1);
    for(i=0; str1[i]!='\0' ;i++){
        if(str1[i]=='0'){
            str1[i]='1';
        }
    }
    printf("\n%s\n",str1);
    return 0;
}
int main10(){
    char cris[10];
    int n;
    printf("Digite a string: ");
        gets(cris);
    for(n=strlen(cris); n>0 ;n--){
        printf("%c",cris[n-1]);
    }
    return 0;
}
int main14(){
    char palavra[50];
    int i;
    gets(palavra);
    for(i=0; palavra[i]!='\0'; i++){
        palavra[i]=palavra[i]+1;
    }
    printf("%s",palavra);
    return 0;
}
int main1516(){
    char str[50];
    int i;
    printf("Digite a str em letras minusculas: ");
        gets(str);
    for(i=0; str[i]!='\0' ;i++){
        str[i]=str[i]-32;
    }
    printf("\n%s\n",str);
    return 0;
}
int main17(){
    char frase[50];
    char frase2[50];
    int i,n,j=0;
    printf("Digite uma frase: ");
        gets(frase);
    for(i=0; frase[i]!='\0' ;i++){
        if(frase[i]!=32){
        frase2[j]=frase[i];
        j++;
        }
    }
    for(i=0; i<j ;i++){
    printf("%c",frase2[i]);
    }
    return 0;
}
int main18(){
    char str1[50],L1,L2;
    int i,cont;
    printf("Digite str1: \n");
        gets(str1);
    printf("Trocar ( ) por ( ): \n");
        L1=getchar();
        setbuf(stdin, NULL);
        L2=getchar();
    for(i=0; str1[i]!='\0' ;i++){
        if(str1[i]==L1){
            str1[i]=L2;
            cont=1;
        }
    }
    if(cont!=1){
        printf("\nNao existe a letra a ser substituida na string.\n");
    }else{
        printf("\n%s\n",str1);
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////
    struct dados{
        int idade;
        char nome[50];
    };
int main19(){
    struct dados p1[3];
    int i,n,j,menorid,maiorid;
    for(i=0; i<3; i++){
        printf("\nDigite a idade de p[%d]:\n",i+1);
            scanf("%d",&p1[i].idade);
        if(p1[i].idade<0){
            printf("\nidade negativa nao existe, digite novamente.\n");
            i--;
            continue;
        }
        setbuf(stdin, NULL);
        printf("\nDigite o primeiro nome de p[%d]:\n",i+1);
            gets(p1[i].nome);
        if(i==0){
            menorid=p1[i].idade;
            maiorid=p1[i].idade;
            j=i;
            n=i;
        }
        if(p1[i].idade>maiorid){
            maiorid=p1[i].idade;
            n=i;
        }
        if(p1[i].idade<menorid){
            menorid=p1[i].idade;
            j=i;
        }
    }
    if(menorid==maiorid){
        printf("\nIdades sao iguais.\n");
        return 0;
    }
    printf("\nPessoa mais nova:\nNome: %s  \nidade: %d\n ",p1[j].nome,menorid);
    printf("\nPessoa mais velha:\nNome: %s  \nidade: %d\n ",p1[n].nome,maiorid);
    return 0;
}
////////////////////////////////////////////////////////////////////////////

    struct model_consu{
        char model[50];
        float cons;
    };
int main20(){
    struct model_consu car[5];
    int i,j;
    float bestcar;
    for(i=0; i<5 ;i++){
        printf("Digite o modelo do carro [%d]: \n",i+1);
        setbuf(stdin, NULL);
            gets(car[i].model);
        printf("Digite quantos km ele faz com 1 Litro:\n");
            scanf("%f",&car[i].cons);
        if(i==0){
            bestcar=car[i].cons;
            j=i;
        }
        if(car[i].cons>bestcar){
            bestcar=car[i].cons;
            j=i;
        }
        printf("\n");
    }
    printf("\nBest car is: %s\nConsumes: %.2f Km/Litre\n",car[j].model,bestcar);
    for(i=0;i<5;i++){
        printf("Car [%d] consumes %.2f in 1000Km\n",i+1,((1/car[i].cons)*1000));
    }
}
int main(){
    char str1[50],str2[50];
    int n,i,j,strlen2=0;
    printf("Digite a str1: \n");
    setbuf(stdin, NULL);
        gets(str1);
    for(n=strlen(str1),j=0; n>0 ;n--,j++){
        str2[j]=str1[n-1];
        strlen2=strlen2+1;
    }
    system("cls");
    printf("\n\nstr1:\n");
    printf("%s\n",str1);
    printf("\nstr2 (inverso da str1):\n");
    for(i=0; i<strlen2; i++){
        printf("%c",str2[i]);
    }
    printf("\n");
    return 0;
}
