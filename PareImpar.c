#include <stdio.h>

int main() 
{
    int n, valor=5;
    do
    {
        printf("Ingrese un número:\n");
        scanf("%d", &n);
        if(n%2==0)
        {
            printf("%d es Par\n", n);
        }
        else
        {
            printf("%d es Impar\n", n);
        }
        valor=valor-1;
    }    
    while(valor>0);
    printf("***Terminó el ciclo***");
    return 0;
}
    