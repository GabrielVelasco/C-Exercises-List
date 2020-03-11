#include <stdio.h>
#include <stdlib.h>
//Ex1
int main1()
{
 int a, b, t;
 printf("Digite o valor de A: ");
 scanf("%d",&a);

  printf("Digite o valor de B: ");
  scanf("%d",&b);
  if(a == b) {
    printf("A eh: %d \nB eh: %d",a, b);
  }
  t = a;
  printf("A eh: %d\n",a = b);
  printf("B eh: %d\n",t);
  return 0;

}


//Ex2
int main2()
{
    float investA, investB, investC; //qnt cada um investiu
    float x, y, z; //qnts por cent A, B e C investiu em relacao a soma do total investido (investA + investC + investB)
    float premio, ganhoA, ganhoB, ganhoC;

        printf("Valor investido por A: ");
    scanf("%f",&investA);
        printf("Valor investido por B: ");
    scanf("%f",&investB);
        printf("Valor investido por C: ");
    scanf("%f",&investC);
        printf("Premio: ");
            scanf("%f",&premio);

        x = (investA * 100) / (investA + investC + investB);
        y = (investB * 100) / (investA + investC + investB);
        z = (investC * 100) / (investA + investC + investB);

        printf("\nA ganhou: %.2f\nB ganhou %.2f\nC ganhou %.2f\n",(x / 100) * premio, (y / 100) * premio, (z / 100) * premio );
        return 0;


}


//Ex3
int main3() {
    int num;

    printf("Digite o num de 3 digitos: ");
    scanf("%d", &num);

    printf("o num eh: %d%d%d",num % 10, (num / 10) % 10, num / 100);

    return 0;


}


//Ex4
int main4() {
    int num, rest;
    printf("Digite um num: ");
        scanf("%d",&num);
    if(num % 2 == 0) {
        printf("o num eh par");
    }else {
    printf("o num eh impar");
    }

}


//Ex5
int main5() {
    char x;
    printf("Alimento n perecivel: 1\nAlimento perecivel: 2\nHigiene pessoal: 3\nLimpeza 4\n");
    printf("\nDigite o codigo do produto: ");
        scanf("%c",&x);

    switch(x) {
        case '1':
            printf("Produto eh alim n perecivel");
            break;
        case '2':
            printf("Produto eh alim perecivel");
            break;
        case '3':
            printf("Produto eh higiene pessoal");
            break;
        case '4':
            printf("Produto eh limpeza");
            break;
        default:
            printf("Opcao errada.");
}
return 0;
}


//Ex6
int main() {
    char sexo;
    int i, tcon;
    printf("Sexo m ou f: ");
        scanf("%c",&sexo);
    printf("Idade: ");
        scanf("%d",&i);
    printf("Tempo contribuicao: ");
        scanf("%d",&tcon);
            if(sexo == 'm') {
                if(i >= 65 || tcon > 35) {
                    printf("Pode aposentar\n");
                        return 0;
                }
            }

            if(sexo == 'f') {
                if(i >= 60 || tcon > 30) {
                    printf("Pode aposentar\n");
                        return 0; }
                }
        printf("Não pode aposentar kkkkk");
            return 0;
}

//Ex7
int main7() {
    float x, y, z;
    char op;
    printf("Digite 3 valores:\n");
        scanf("%f %f %f",&x, &y, &z);
    printf("Escolha uma opc:\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Sair\n");
        setbuf(stdin,NULL);
        scanf("%c",&op);
    switch(op) {
        case '1':
            printf("Soma de %.2f %.2f %.2f eh: %.2f",x, y, z, x + y + z);
        break;
        case '2':
            printf("Subtrc de %.2f %.2f %.2f eh: %.2f",x, y, z, x - y - z);
        break;
        case '3':
            printf("Divs de %.2f %.2f %.2f eh: %.2f",x, y, z, x / y / z);
        break;
        case '4':
            printf("Multpl de %.2f %.2f %.2f eh: %.2f",x, y, z, x * y * z);
        break;
        case '5':
            printf("Saindo do programa vlw flw");
                return 0;
        break;
    }
    return 0;


}

int mainMEDIA() {
    int n,x,con = 1;
    float m,s = 0;
    printf("digite n:");
    scanf("%d",&n);

    while(con <= n) {
        int x;
        printf("digite x:");
        scanf("%d",&x);
        s = s + x;
        con++;

    }
    m = s / n;
    printf("A media eh: %.2f",m);

}


