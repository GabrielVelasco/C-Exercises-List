#include <stdio.h>
#include <stdlib.h>

//Ex1
int main1()
{
    int i;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&i);
    printf("O numero que vc digitou foi: %d ",i);

return 0;
}

//Ex2
int main2()
{
    float x;
    printf("Digite qualquer numero do conjunto real: \n");
    scanf("%f",&x);
    printf("O numero que vc digitou foi: %.2f",x);
return 0;
}

//Ex3
int main3()
{
    int x, y, z, s;
    printf("Digite tres valores inteiros: \n");
    scanf("%d %d %d",&x, &y, &z);
    s = x + y + z;
    printf("O valor da soma de %d + %d + %d eh %d",x, y, z, s);
return 0;
}


//Ex4
int main4()
{
    float x, y;
    printf("Digite um numero real: \n");
    scanf("%f",&x);
    y = x * x;
    printf("O quadrado de %.2f eh %.2f",x, y);
return 0;

}


//Ex5
int main5()
{
    float x;
    float y = 5;
    printf("Digite um num: \n");
    scanf("%f",&x);
    printf("A quinta parte de %.2f eh %.2f",x, x/y);
return 0;
}


//Ex6
int main6()
{
    float c, f;
    printf("Digite a temp em Celcius: \n");
    scanf("%f",&c);

    f = (c * (9.0 / 5.0)) + 32;
    printf("O valor em farenasdf eh: %.2f",f);
}


//Ex7
int main7()
{
    float c, f;
    printf("Digite a temp em Farenkkkk: \n");
    scanf("%f",&f);

    c = ((f - 32) * 5) / 9;

    printf("O valor em celcius eh: %.2f graus celcius",c);

return 0;
}


//Ex8
int main8()
{
    float k, c;
    printf("Digite a temp em em K: ");
    scanf("%f",&k);

    c = k - 273.15;

    printf("%.2f Kelvin em graus celcius eh %.2f",k, c);

return 0;
}


//Ex9
int main9()
{
    float k, c;
    printf("Digite a temp em em C: ");
    scanf("%f",&c);

    k = c + 273.15;

    printf("%.2f Celcius em graus Kelvin eh %.2f",c, k);

return 0;
}


//Ex10
int main10()
{
    float k, s;
    printf("Vel em KM/H: ");
    scanf("%f",&k);
    s = k / 3.6;

    printf("A vel em M/S eh %.2f",s);

    return 0;
}


//Ex11
int main11()
{
    float ms, kh;
    printf("Velocidade em M/S: ");
    scanf("%f",&ms);

    kh = ms * 3.6;
    printf("A vel em KH/H eh %.2f: ",kh);
}


//Ex12
int main12()
{
    float m, k;
    printf("Digite a distancia em Milhas: ");
    scanf("%f",&m);

    k = 1.61 * m;

    printf("A distancia %.2f milhas em km eh: %.2f",m, k);
return 0;
}


//Ex13
int main13()
{
    float m, k;
    printf("Digite a distancia em KM: ");
    scanf("%f",&k);

    m = k / 1.61;

    printf("A distancia %.2f KM em Milhas eh: %.2f",k, m);
return 0;

}


//Ex14
int main14()
{
    float g, r;
    printf("Digite o valor em graus: ");
    scanf("%f",&g);

    r = (g * 3.14) / 180;
    printf("O valor em Radioano eh: %.2f",r);
return 0;
}


//Ex15
int main15()
{
    float g, r;
    printf("Digite o valor em R: ");
    scanf("%f",&r);
    if(r == 10) {
        printf("DEZ E O CARALHO PORRA");
    return 0;
    }


     g = (180 * r) / 3.14;
    printf("O valor em G eh: %.2f",g);
return 0;
}


//Ex37
int main()
{
    float ValorP, ValorDesc;
    printf("\nDigite o valor do produto: ");
    scanf("%f",&ValorP);
        if(ValorP >= 3000) {
            printf("Desconto apenas para comprar abaixo de 1000 BRL, \n Digite um novo valor");
            return 0;

            }else{
                if(ValorP <= 5){
                        if(ValorP == 1){
                            printf("QUER DESCONTO EM UM REAL PUTA Q PARIL KKKKKKK \n");
                        }
                printf("vsf kkkkk\n");
                return 0;
                }
        }

    printf("O valor com desconto eh: %.2f",ValorDesc = 0.88 * ValorP);

    return 0;

}
