#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int i;
    for(i=1;i<=5;i++){
        printf("%d\n",i*3);
    }
    return 0;
}
int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    i=(i+1)-i;
    while(i<=100){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    i=(i+1)-i;
    do{
        printf("%d ",i);
        i++;
    }while(i<=100);
}
int main3(){

}
