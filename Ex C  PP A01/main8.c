#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, f;
    printf("Digite a altura em CM do degrau: \n");
    scanf("%d",&x);
    printf("Digite a altura em CM desejada: \n");
    scanf("%d",&y);

    f = y / x;
    printf("Faltam %d degraus.",f);

return 0;
}
