#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main1()
{
    int opc,mari,mpon,mhar;
    float x,y,z;
    float mgeo;
    int p1,p2,p3;
    do {
        printf("Digite uma opc:\n ");
        printf("(1)Ponderada\n (2)Geometrica\n (3)Harmonica\n (4)Aritmetica\n");
            scanf("%d",&opc);
    }while (opc > 4 || opc < 1);
        printf("Digite x, y e z: \n");
            scanf("%d %d %d",&x,&y,&z);
        if(opc == 1){
                printf("Digite a porra dos pesos: \n");
                    scanf("%d %d %d",&p1,&p2,&p3);
                        mpon = ((p1*x) + (p2*y) + (p3*z)) / (p1 + p2 + p3);
                            printf("A media pon eh: %d",mpon);
        }else {
            if(opc == 2) {
                mgeo = pow(((x/100.0)+1)*((y/100.0)+1)*((z/100.0)+1), 1.0/3.0);
                    printf("mgeo eh: %.2f",mgeo);
            }
        }
    return 0;
}


int main3() {
    int x, soman = 0, somap = 0, c = 0;
    while(c < 5) {
            c++;
        printf("Digite X: ");
        scanf("%d",&x);
            if(x < 0) {
                soman++;
            }else {
                somap++;
                }
    }
    printf("Valores negativos: %d\nPositivos: %d",soman, somap);

}


int main4() {
    int i;
    for(i=300;i <= 300 && i >= 200;i--){
        if(i % 2 == 0){
            printf("Numeros pares: %d\n",i);
        }
    }
}


int main5() {
    int x, y=0, z;
    printf("Digite o num: ");
        scanf("%d",&x);
    do{
        printf("%d x %d = %d\n",x,y,x*y);
        y++;
    }while(y <= 10);
return 0;
}


int main6() {
    int x, y=0, z,de,ate;
    printf("Digite o num: ");
        scanf("%d",&x);
    printf("De - ate: ");
        scanf("\n%d \n%d",&de,&ate);
    for(y=de;y >= de && y <= ate;y++){
            printf("%d x %d = %d\n",x,y,x*y);
    }
return 0;
}
