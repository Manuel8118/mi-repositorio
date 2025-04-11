#include <stdio.h>

int main() {
    int num, i, cont=0;
    // Solicitar al usuario un número para saber si es primo o no
    printf("Introduce un número entero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) 
    {
        if (num%i==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        printf("El número dado %d es Primo\n", num);
    }
    else
    {
        printf("El número dado %d No es Primo\nporque es divisible entre\n", num);
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                printf("%d\n",i);
            }
        }
    }
}