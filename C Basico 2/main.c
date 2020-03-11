#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main1()
{
    int x,y;
    printf("Digite 2 nums: ");
        scanf("%d %d",&x,&y);
    while(x > y){
        printf("Num maior eh %d",x);
        return 0;
    }
    while(y > x){
        printf("Num maior eh %d",y);
        return 0;
    }
    return 0;
}


int main2() {
    float x;
    printf("Digite o n: ");
        scanf("%f",&x);
    while(x < 0){
        printf("Num invalido");
        return 0;
    }
    while(x >= 0){
        printf("Raiz de %.2f eh: %.2f",x,sqrt(x));
        return 0;
    }
}


int main3(){
    float x,y;
    printf("digite o num: ");
        scanf("%f",&x);
    if(x >= 0){
        printf("Raiz de %.2f eh: %.2f ",x,sqrt(x));
    }else {
        printf("%.2f elevado ah 2 eh: %.2f",x,pow(x, 2));
        }

}

int main4(){
    float x;
    printf("Digite o num: ")/
        scanf("%f",&x);
    if(x >= 0){
        printf("o quadrado de %.2f eh: %.2f\nA raiz de %.2f eh: %.2f",x,pow(x, 2),x,sqrt(x));
    }
}


int main5(){
    int x;
    scanf("%d",&x);
    if(x % 2 == 0){
        printf("Num eh par");
    }else{
        printf("Num eh impar");
    }

}


int main6(){
    int x,y;
    scanf("%d %d",&x, &y);
        if(x>y){
            printf("o maior eh: %d\nDiferenca eh: %d",x,x-y);
        }else{
            printf("%d eh maior\nDiferenca eh: %d",y,y-x);
            }
}

int main7(){
    int x,y;
    scanf("%d %d",&x, &y);
    if(x==y){
        printf("numeros iguais");
        return 0;
    }
    if(x>y){
        printf("%d eh maior",x);
    }else{
    printf("%d eh maior",y);
    }
}


int main8(){
    float n1, n2;
    printf("Digite o valor de n1 e n2: ");
        scanf("%f %f",&n1, &n2);
    if(n1>10 || n1<0){
            printf("Nota nao eh valida");
    }else{
        if(n2>10 || n2<0){
            printf("Nota nao eh valida");
        }else{
            printf("A media das 2 notas eh: %.2f",(n1+n2)/2);
            return 0;
        }
    }

}

int main9(){
    float sal, emp;
    printf("Digite o salario: ");
        scanf("%f",&sal);
    printf("Digie o valor da prestacao: ");
        scanf("%f",&emp);
    float i=0.2*sal;
    if(emp>i){
        printf("Emp nao concedido.");
    }else{
        printf("Emp concedido.");
        }
}

int main10(){
    float alt;
    char s;
    printf("Digite altura: ");
        scanf("%f",&alt);
    printf("Digite o sexo m/f: ");
    setbuf(stdin,NULL);
        scanf("%c",&s);
    if(s=='m'){
        printf("peso ideal para home de altura %.2f eh: %.2f",alt,(72.7*alt)-58);
        return 0;
    }else{
        if(s=='f'){
            printf("peso ideal para mulher de altura %.2f eh: %.2f",alt,(62.1*alt)-44.7);
            return 0;
        }
    }
}

int main11(){
    int num,x,y,z;
    printf("digite o num: ");
        scanf("%d",&num);
    if(num<0){
        printf("O num eh menor q zero.");
    }
    if(num>=0 && num<10){
        printf("Soma eh %d",num);
    }else{
        if(num>=10 && num<100){
            x=num%10;
            y=num/10;
            printf("A soma dos algs do num eh: %d",x+y);
        }else{
            if(num>=100 && num<1000){
                x=num%10;
                y=(num/10)%10;
                z=num/100;
                printf("a soma dos alg eh: %d",x+y+z);
            }else{
                if(num>=1000 && num<10000){
                    int w;
                    x=num%10;
                    y=(num/10)%10;
                    z=(num/100)%10;
                    w=num/1000;
                printf("a soma dos alg eh: %d",x+y+z+w);
                }
            }
        }
    }
    return 0;
}

int main12(){//LOGARITMO
}

int main13(){
    float n1,n2,n3,mp;
    printf("Digite as tres notas: ");
        scanf("\n%f\n%f\n%f",&n1,&n2,&n3);
    mp=(n1+n2+(n3*2))/4;
    printf("A media ponderada eh: %.2f\n",mp);
    if(mp<60){
        printf("REPROVADO! %.2f menor que 60",mp);
    }else{
        printf("APROVADO! sua nota foi %.2f",mp);
    }
}

int main14(){
    int nt,na,nf;
    float pnt=2,pna=3,pnf=5,mp;
        printf("Digite as notas para Trabalho, Avaliacao e Prova Final: \n");
            scanf("%d %d %d",&nt,&na,&nf);
        mp=((nt*2)+(na*3)+(nf*5))/10;
        printf("A media eh: %.2f\n",mp);
            if(mp<=2.9){
                printf("REPROVADO!");
            }else{
                if(mp>2.9 && mp<=4.9){
                    printf("RECUPERACAO!");
                }else{
                    printf("APROVADO! %.2f maior ou igual a 5",mp);
                }
            }
}
int mainAP3(){
    int x,s=1,c;
    printf("Digite um num: ");
        scanf("%d",&x);
    for(c=x;c<=x&&c>1;c--){
            if(c==x){
        s=s*(x*(c-1));
            }else{
            s=s*(c-1);
            }
        }
    printf("fatorial eh: %d",s);
}
int main18(){
    int x,y;
    char c;
    do{
        printf("Escolha uma opc: \n");
        printf("Soma (1)\n");
        printf("Subtracao (2)\n");
        printf("Divisao (3)\n");
        printf("Multiplicacao (4)\n");
        printf("\n");
            setbuf(stdin,NULL);
            scanf("%c",&c);
    }while(c!='1'&&c!='2'&&c!='3'&&c!='4');
        switch(c){
            case '1': printf("Digite x e y: \n");
                        scanf("%d %d",&x,&y);
                        printf("Soma eh: %d",x+y);
                        return 0;
            case '2': printf("Digite x e y: \n");
                        scanf("%d %d",&x,&y);
                        printf("Subtracao eh: %d",x-y);
                        return 0;
            case '3': printf("Digite x e y: \n");
                        scanf("%d %d",&x,&y);
                        printf("Divisao eh: %d",(float)x/y);
                        return 0;
            case '4': printf("Digite x e y: \n");
                        scanf("%d %d",&x,&y);
                        printf("Mulpc eh: %d",x*y);
                        return 0;
        }
    return 0;
}
int main19(){
        int i;
        scanf("%d",&i);
            if(i%3==0 && i%5==0){
                printf("Num eh divisivel por 3 e 5, R = %d e %d",i/5,i/3);
                return 0;
            }
            if(i%3==0){
                printf("num eh divisivel por 3, R = %d",i/3);
            return 0;
            }else{
                if(i%5==0)
                    printf("Num eh divisivel por 5, R = %d",i/5);
                    return 0;
            }

}
int main20(){
    int a,b,c;
        printf("Digite os lados do tri: ");
            scanf("%d %d %d",&a,&b,&c);
        if(a<(b+c)&&b<(c+a)&&c<(a+b)){
            if(a==b&&a==c&&b==c){
                printf("Triangulo equilatero, a = b = c");
                return 0;
            }else{
                if(a==b||b==c||c==a){
                    printf("Trianuglo isoceles 2 lados iguais.");
                return 0;
                }else{
                    if((a!=b)&&(b!=c)){
                        printf("Triangulo escaleno, tres lados diferentes");
                        return 0;
                    }
                }
            }
        }

}
