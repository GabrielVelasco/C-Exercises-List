#include <stdio.h>
#include <stdlib.h>

int main1()
{
    float sal, hsemana, valorh;
    printf("Digite a quantidade de horas na semana: ");
        scanf("%f",&hsemana);
    printf("Digite o valor da hora: ");
        scanf("%f",&valorh);
    if(hsemana<=40){
        printf("o salario eh: %.2f",valorh*hsemana);
        return 0;
    }else{
        if(hsemana>40&&hsemana<=60){
            printf("O salario com bonus de 50 eh: %.2f",(hsemana*valorh)*1.5);
            return 0;
        }else{
            if(hsemana>60){
                printf("O salario com bonus de 100 eh: %.2f",(hsemana*valorh)*2);
                return 0;
            }
        }
    }

    return 0;
}
int main2(){
    int num, somap=0, somai=0,c;
    for(c=1;c<=10;c++){
        printf("Digite um num: ");
            scanf("%d",&num);
        if(num%2==0){
            somap=somap+1;
            }else{
                somai=somai+1;
            }
    }
        printf("Quantidade de num impares eh %d, e pares eh %d",somai,somap);
}
int main3(){
    int n, c;
    float sal,somas=0;
    printf("Digite quantidade de salarios recebidos em 2018: ");
        scanf("%d",&n);
    for(c=1;c<=n;c++){
        printf("Digite o valor do salario %d: ",c);
            scanf("%f",&sal);
        somas=somas+sal;
    }
    if(somas>28559.70){
        printf("A soma de todos os salarios eh: %.2f.\nVoce vai para IR OTARIO IMPORTO E ROUBO.",somas);
    }else{
        printf("A soma do salario eh %.2f\nNao vai pagar IR.",somas);
    }
}
int main4(){
        int num, soma=0,i;
        for(i=1;;){
            printf("Digite o num %d ",i);
                scanf("%d",&num);
            soma=soma+num;
            if(num==0){
                printf("A media eh: %d",soma/(i-1));
                return 0;
            }
            i++;
        }
}
int main5(){
    int c=1,num,num2,num3,num4,soma=0;
        printf("Usando While: ");
        printf("\n");
    while(c<=10){
        printf("\n");
        printf("%d- Digite 4 num: ",c);
        printf("\n");
            scanf("%d %d %d %d",&num,&num2,&num3,&num4);
        soma=soma+num+num2+num3+num4;
        printf("Soma dos 4 num eh: %d",soma);
        printf("\n");
        soma=0;
        c++;
    }
    printf("\n");
    system("pause");
    printf("\n");
    printf("Usand do-while: ");
    printf("\n");
    soma=0;
    c=1;
    do{
        printf("%d- Digite 4 num: ",c);
        printf("\n");
            scanf("%d %d %d %d",&num,&num2,&num3,&num4);
        soma=soma+num+num2+num3+num4;
        printf("a soma do numeros eh: %d",soma);
        soma=0;
        printf("\n");
        c++;
    }while(c<=10);
    printf("\n");
    system("pause");
    soma=0;
    c=1;
    printf("\n");
    printf("Usando for: ");
    printf("\n");
    for(c=1;c<=10;c++){
        printf("%d- Digite 4 num: ",c);
        printf("\n");
            scanf("%d %d %d %d",&num,&num2,&num3,&num4);
        soma=soma+num+num2+num3+num4;
        printf("A soma eh: %d",soma);
        soma=0;
        printf("\n");
    }
}
int main(){
    float altc=1.5, altz=1.1, cresz=0.03, cresc=0.02,altcaa,altzaa;
    int a;
        for(a=1;;a++){
            altcaa=0.02*a;
            altzaa=0.03*a;
                if((altc+altcaa)<(altz+altzaa)){
                    printf("Demorou %d anos.",a);
                    printf("altura chico %.2f e alt ze %.2f",altc+altcaa,altz+altzaa);
                    return 0;
                }

        }
}
