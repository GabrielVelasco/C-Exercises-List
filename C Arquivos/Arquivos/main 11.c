//11. Fac¸a um programa no qual o usu´ ario informa o nome do arquivo e uma palavra, e retorne
//o n´umero de vezes que aquela palavra aparece no arquivo.

int scan(char a[], char b[]){     //a = str1 (text) | b = str
    int i,j,cont = 0, cont2 = 0;
    if(strlen(b) > strlen(a))
        return 0;

        for(j=0, i=0; j<strlen(a); j++){
            if(b[i] == a[j]){
                cont++;
                i++;
            if(cont == strlen(b)){
                cont2++;
                i = 0;
                cont = 0;
            }
            continue;
            }
            if( (cont > 0) && (b[i] != a[j]) ){
                cont = 0;
                i--;
                j--;
            }
        }

        if(cont2 > 0)
            return cont2; // i = cont2
        else
            return 0;

}

int main11(){
    char str[50], str1[100], *s, d = 0,opt;
    printf("\nType str: ");
    do{
        if(d == 1)
            printf("\nMinimum 2 characters, type again: ");
        gets(str);
        d = 1;
    }while(strlen(str) < 2);
    FILE *arc = fopen("arq.txt", "r");

    s = fgets(str1, 100, arc);
    if(s == NULL)
        printf("\nError at reading archive!");

    int i = scan(str1, str);
    if(i == 0)
        printf("\n| %s | didn't appears inside the archive\n\n",str);
    else
        printf("\n| %s | appears inside the archive: %d time(s)\n\n",str, i);

    fclose(arc);
    printf("\nENTER run again\nOTHER to quit\n");
    scanf("%c",&opt);
    if(opt == '\n')
        main();
    return 0;
}
