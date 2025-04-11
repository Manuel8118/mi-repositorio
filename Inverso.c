#include <stdio.h>

int main() 
{
    int num, n, rev=0, x;
    // Solicitar al usuario un número para invertirlo
    printf("Introduce un número entero: ");
    scanf("%d", &n);
    num=n;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("El número inverso de %d es %d\n", num, rev);
}