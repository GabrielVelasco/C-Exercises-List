#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//https://www.urionlinejudge.com.br/judge/en/problems/view/1001
int main1001(){
    int A,B,X;
    scanf("%d%d",&A, &B);
    printf("X = %d\n", X = A + B);

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1016
int main1016(){
    int D;
    scanf("%d", &D);
    printf("%d minutos\n", (D*2));

    return 0;
}
//https://www.urionlinejudge.com.br/judge/en/problems/view/1005 //double = scanf("%lf", &var);
int main1005(){
    double A, B, MEDIA;
    float wA = 3.5, wB = 7.5;
    do{
        scanf("%lf %lf", &A, &B);
    }while( (A < 0.0 || A > 10.0) || (B < 0.0 || B > 10.0) );

    MEDIA = ( (A*wA) + (B*wB) ) / (wA + wB);

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1008
int main1008(){
    int e_numb, e_hours;
    float price_hour;

    scanf("%d%d%f",&e_numb, &e_hours, &price_hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", e_numb, (e_hours*price_hour) );

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1478
int main1478(){
    int opt, i, j;
    int mat[100][100];

    while( scanf("%d", &opt) ){
        if(opt == 0)
            break;
        printf("\n");
        for(i = 0; i < opt; i++){
            for(j = 0; j < opt; j++){
                mat[i][j] = 1 + abs(i - j);
                printf(" %3d", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1068 
int main1068(){
    char expression[10000];
    gets(expression);
    if(expression == EOF)
        return 0;

    int i, j, open_par = 0, close_par = 0, temp = 0, par_cont = 0;
    for(i = 0; i < strlen(expression); i++){
        if(expression[i] == '(')
            open_par ++;
        if(expression[i] == ')')
            close_par ++;
    }
    if( (open_par != close_par) || expression[0] == ')' || expression[strlen(expression) - 1] == '(' ){
        printf("incorrect\n");
        //main();
    }
    for(i = 0; i < strlen(expression); i++){
        if(expression[i] == ')' && temp == 0){
            printf("incorrect\n");
            //main();
        }
        if(expression[i] == '('){
            for(j = i+1; j < strlen(expression); j++){
                if(expression[j] == ')'){
                    if(j == temp)
                        continue;
                    par_cont ++;
                    if(open_par == par_cont){
                        printf("correct\n");
                        //main();
                    }
                    temp = j;
                    break;
                }
            }
        }
    }
    if( open_par != par_cont ){
        printf("incorrect\n");
        //main();
    }     
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1024
int main1024(){
    char text[1000], str[1000];
    int n_case_test, cont = 0, cont2 = 0, LinesBeEncr = 0, i, j, assit;
        scanf("%d", &n_case_test);

    while( cont < n_case_test ){
        printf("\nCase test %d\n", cont+1);
        do{
            scanf("%d", &LinesBeEncr);
        }while(LinesBeEncr < 1 || LinesBeEncr > 10000);

        cont2 = 0;
        while( cont2 != LinesBeEncr ){
            setbuf(stdin, NULL);
            gets(text);
            for(i = 0; i < strlen(text); i++){
                if( (text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z') ){
                    text[i] = text[i] + 3;
                }
            }

            for(i = 0, j = (strlen(text) - 1); i < strlen(text); i++, j--){
                if(i == 0)
                   strcpy(str, text);
                text[i] = str[j];
            }
            assit = strlen(text) / 2;

            for(i = assit; i < strlen(text); i++)
                text[i] = text[i] - 1;

            cont2 ++;
            printf("%s\n", text);
        }
        cont ++;
    }
    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1087
int main1087(){
    int x1, y1, x2, y2, i;

    while(1){
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;
        if(x1 == x2 && y1 == y2){
            printf("0\n");
            continue;
        }

        if(x1 == x2 || y1 == y2){
            printf("1\n");
            continue;
        }

        for(i = 1; i <= 7; i++){
            if( ((x2 == i + x1) && (y2 == y1 - i)) || ((x2 == x1 - i) && (y2 == y1 - i)) || ((x2 == x1 - i) && (y2 == y1 + i)) || ((x2 == x1 + i) && (y2 == y1 + i)) ){
                printf("1\n");
                break;
            }else if (i == 7)
                printf("2\n");
        }   
    }

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1161
int main1161(){
    int long long M, N, i, j;

    while( scanf("%lld%lld", &M, &N) != EOF ){
        if( (M < 0 || M > 20) || (N < 0 || N > 20) )
            continue;

        i = M;
        j = N;

        while(1){
            if(i == 0){
                M = 1;
                break;
            }
            if(i == 1)
                break;
            M *= (i - 1);
            i --;
        }

        while(1){
            if(j == 0){
                N = 1;
                break;
            }
            if(j == 1)
                break;
            N *= (j - 1);
            j --;
        }

        printf("%lld\n", M + N);
    }

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1040
int main1040(){
    float n1, n2, n3, n4, avr, exam, avr2;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    avr = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    printf("Media: %.1f\n", avr);
    if(avr >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(avr < 5){
        printf("Aluno reprovado.\n");
    }else{
            printf("Aluno em exame.\n");
            scanf("%f", &exam);
            printf("Nota do exame: %.2f\n", exam);
            avr2 = (exam + avr) / 2;
            if(avr2 >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.2f\n", avr2);
            }else{
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.2f\n", avr2);
            }
            
        }

    return 0;
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/1002
int main1002(){
    double R;
    scanf("%lf", &R);
    printf("%lf", 3.14159 * (R * R));

    return 0;
}

int main(){
    srand ( time(0) );
    for(int i = 0; i < 5; i++){
        printf("%d\n", rand() );
    }

    return 0;
}