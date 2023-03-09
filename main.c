#include <stdio.h>
#include <stdlib.h>

//TABUADA

int main()
{
    int num, i;

    printf("\n Digite um valor de 0 a 10: \n");
    scanf("%d", &num);

    if(num>=0 && num<=10)
    {
        for(i=0; i<=10; i++)
        {
            printf("\n %d x %d = %d \n", i, num, i*num);
        }
    }
    else
    {
        printf("========================\n");
        printf("=Digitou valor invalido=\n");
        printf("========================");
    }
    return 0;
}
