#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ponteiro
//13. Elabore uma func¸ ˜ao que receba duas strings como parˆametros e verifique se a segunda
//string ocorre dentro da primeira. Use aritm ´ etica de ponteiros para acessar os caracteres
//das strings.
// se b ocorre em a

int scan(char a[], char b[]){
    int i,j,cont = 0;
    if(strlen(b) > strlen(a))
        return 0;
    
        for(j=0, i=0; j<strlen(a); j++){
            if(b[i] == a[j]){
                cont++;
                i++;
            if(cont == strlen(b))
                return 1;
            continue;
//          if(i >= strlen(b))
//              i--;
            }
            if( (cont > 0) && (b[i] != a[j]) ){
                cont = 0;
                i--;
                j--;
            }
        }

        if(cont == strlen(b))
            return 1;
        else
            return 0;
    
}

int main(){
    char str1[50], str2[50];
    int verify;
    printf("\nType both strings: ");
        scanf("%s",str1);
        setbuf(stdin, NULL);
        scanf("%s",str2);
        setbuf(stdin, NULL);
    printf("\nStr A = %s\n\nStr B = %s\n",str1,str2);

    verify = scan(str1, str2);
    if(verify == 0)
        printf("\nstr B is not inside A, V = %d\n",verify);
    if(verify == 1)
        printf("\nstr B is inside A, V = %d\n",verify);

    return 0;
}