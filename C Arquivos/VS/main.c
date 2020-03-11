#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //toupper, tolower

// 1. Escreva um programa que:
// (a) Crie/abra um arquivo texto de nome “arq.txt”
// (b) Permita que o usu´ ario grave diversos caracteres nesse arquivo, at ´e que o usu´ ario
// entre com o caractere ‘0’
// (c) Feche o arquivo
// Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres
// armazenados.

int main(){
    FILE *arc = fopen("arq.txt", "w");
    if(arc == NULL){
        printf("Erro ao abrir o arquivo");
        system("pause");
        exit(1);
    }

    char temp;
    int i;
    while(1){
        setbuf(stdin, NULL);
        scanf("%c", &temp);
        if(temp == '0'){
            fclose(arc);
            break;
        }
        fputc(temp, arc);
    }

    arc = fopen("arq.txt", "r");
    if(arc == NULL){
        printf("Error!");
        exit(1);
    }

    while(1){
        temp = fgetc(arc);
        printf("%c", temp);
        if(feof(arc))
            break;
    }

    fclose(arc);
    return 0;
}

//4. Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
//letras sao vogais e quantas s ˜ ao consoantes.

int main4(){
    FILE *arc = fopen("arq.txt", "r");
    if(arc == NULL){
        printf("ERRO");
        system("pause");
        exit(1);
    }
    char c;
    int contv = 0, contc = 0;
    while(1){
        c = fgetc(arc);
        if(feof(arc))
            break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contv++;
        else{
            if(c == 32)
                continue;
            contc++;
        }


    }
    printf("\nVogals = %d\nCons = %d",contv,contc);

    fclose(arc);
    return 0;
}

//5. Fac¸a um programa que receba do usuario um arquivo texto e um caracter. Mostre na tela ´
//quantas vezes aquele caractere ocorre dentro do arquivo.

int main5(){
    FILE *arc = fopen("arq.txt", "r");
    if(arc == NULL){
        printf("ERRO");
        system("pause");
        exit(1);
    }
    int cont = 0;
    char c, d;
    printf("\nType a character: ");
        c = getchar();
    while(1){
        d = fgetc(arc);
        if(feof(arc))
            break;
        if(d == c)
            cont++;
    }
    printf("\nCont = %d",cont);

    fclose(arc);
    return 0;
}

//6. Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
//vezes cada letra do alfabeto aparece dentro do arquivo.

int main6(){
    FILE *arc = fopen("arq.txt", "r");
    if(arc == NULL){
        printf("ERRO");
        system("pause");
        exit(1);
    }
    char c;
    int conta = 0, conte = 0, conti = 0, conto = 0, contu = 0;
    while(1){
        c = fgetc(arc);
        if(feof(arc))
            break;
        if(c == 'a')
            conta++;
        if(c == 'e')
            conte++;
        if(c == 'i')
            conti++;
        if(c == 'o')
            conto++;
        if(c == 'u')
            contu++;
    }
    printf("\nA = %d\nE = %d\nI = %d\nO = %d\nU = %d\n",conta,conte,conti,conto,contu);

    fclose(arc);
    return 0;
}

//7. Fac¸a um programa que receba do usuario um arquivo texto. Crie outro arquivo texto ´
//contendo o texto do arquivo de entrada, mas com as vogais substitu´ıdas por ‘*’.

int main7(){
    FILE *arc = fopen("arq.txt", "r");
    if(arc == NULL){
        printf("Error opening arq");
        system("pause");
        exit(1);
    }
    char *p, str1[100];
    int verf, i;

    p = fgets(str1, 100, arc);
    if(p == NULL)
        printf("\nError at reading");

    for(i=0; i<strlen(str1); i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
            str1[i] = '*';
    }
    FILE *arc2 = fopen("arq2.txt","w");
    if(arc2 == NULL){
        printf("\nError at opening arq2");
        system("pause");
        exit(1);
    }

    verf = fputs(str1, arc2);
    if(verf == EOF)
        printf("\nError writing to arc2");

    fclose(arc2);
    fclose(arc);
    return 0;
}

//8. Fac¸a um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo ´
//conteudo, mas com todas as letras min ´ usculas convertidas para mai ´ usculas. Os no- ´
//mes dos arquivos serao fornecidos, via teclado, pelo usu ˜ ario. A func¸ ´ ao que converte ˜
//maiuscula para min ´ uscula ´ e o toupper(). Ela ´ e aplicada em cada caractere da string.

int main8(){
    char arq1[50], arq2[50];
    printf("\nType arq1: ");
        gets(arq1);
    FILE *arc = fopen(arq1, "r");
    if(arc == NULL){
        printf("Error opening arq1\n");
        system("pause");
        exit(1);
    }
    char *p, str1[100];
    int verf, i;

    p = fgets(str1, 100, arc);
    if(p == NULL)
        printf("\nError at reading\n");

    for(i=0; i<strlen(str1); i++){
        str1[i] = toupper(str1[i]);
    }

    printf("\nType arq2: ");
        gets(arq2);
    FILE *arc2 = fopen(arq2,"w");
    if(arc2 == NULL){
        printf("\nError at opening arq2\n");
        system("pause");
        exit(1);
    }

    verf = fputs(str1, arc2);
    if(verf == EOF)
        printf("\nError writing to arc2\n");

    fclose(arc2);
    fclose(arc);
    return 0;
}

//9. Fac¸a um programa que receba dois arquivos do usu´ ario, e crie um terceiro arquivo com
//o conte´udo dos dois primeiros juntos (o conte´udo do primeiro seguido do conte´udo do
//segundo).

int main9(){
    char arq1[50], arq2[50], str1[50], str2[50], *ver1, *ver2;
//    printf("\nType arq1: ");
//        gets(arq1);
//    printf("\nType arq2: ");
//        gets(arq2);

    FILE *archive1 = fopen("arq.txt", "r");
    FILE *archive2 = fopen("arq2.txt", "r");
    FILE *archive3 = fopen("arq3.txt","w");

    ver1 = fgets(str1, 100, archive1);
    if(ver1 == NULL)
        printf("\nError at reading arq 1");
    ver2 = fgets(str2, 100, archive2);
    if(ver2 == NULL)
        printf("\nError at reading arq 2");

    char a[50] = " ";
    strcat(str1, a);
    strcat(str1, str2);
    int ver3;
    ver3 = fputs(str1, archive3);
    if(ver3 == EOF)
        printf("\nError at writing");

    fclose(archive1);
    fclose(archive2);
    fclose(archive3);

    return 0;
}

//10. Fac¸a um programa que receba o nome de um arquivo de entrada e outro de sa´ıda. O
//arquivo de entrada cont´em em cada linha o nome de uma cidade (ocupando 40 caracteres)
//e o seu n´umero de habitantes. O programa dever ´a ler o arquivo de entrada e gerar
//um arquivo de sa´ıda onde aparece o nome da cidade mais populosa seguida pelo seu
//n´umero de habitantes.

int main10(){
    FILE *archive = fopen("arq.txt","r");
    FILE *arc_dest = fopen("arq2.txt", "w");
    if(archive == NULL || arc_dest == NULL){
        printf("\nError at opening archive");
        exit(1);
    }

    int line_c = 0, i, j, num_c = 0;
    char line[50], c_name[50][50];
    while(1){
        fgets(line, 100, archive);
        line_c++;
        if(feof(archive)){
            break;
        }
    }
    printf("\n\nNumber of cities = %d\n",line_c);

    int big_pop = 0;
    int *population = malloc(line_c*sizeof(int));
    if(population == NULL){
        printf("Error at alocating");
        exit(1);
    }
    rewind(archive);

    for(i=0; i<line_c; i++){
        fscanf(archive, "%s%d", line, &population[i]);
        if(i == 0)
            big_pop = population[i];
        if(population[i] > big_pop){
            big_pop = population[i];
            num_c = i;
        }
        for(j=0; line[j] != '\0'; j++){
            c_name[i][j] = line[j];
            if(line[j+1] == '\0')
                c_name[i][j+1] = '\0';
        }
    }

    for(j=0; c_name[num_c][j] != '\0'; j++){
        fprintf(arc_dest, "%c", c_name[num_c][j]);
        if(c_name[num_c][j+1] == '\0')
            fprintf(arc_dest, " %d", population[num_c]);
    }

    free(population);
    fclose(archive);
    fclose(arc_dest);
    system("pause");
    return 0;
}