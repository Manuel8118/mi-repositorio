// Programa para revisar si un numero ingresado es Primo o No
#include <stdbool.h>
#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);
    // Si n es menor o igual que 1,
    // no es primo
    if (n <= 1)
        printf("El numero %d No es primo\n", n);
    else {

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }
        // Si n es divisible entre más de 2 numeros,
        // entonces No es Primo
        if (cnt > 2)
            printf("El numero %d No es primo\n", n);

        // De otra manera Es Primo
        else
            printf("El numero %d Es primo", n);
    }
    return 0;
}
