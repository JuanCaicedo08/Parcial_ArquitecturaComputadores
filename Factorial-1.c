#include <stdio.h>

int main() {

    int n, i;
    unsigned long long fact = 1;
    printf("Ingresa un numero(entero): ");
    scanf("%d", &n);

    // Muestra un aviso si el usuario ingresa un numero negativo !
    
    if (n < 0)
        printf("El factorial de un numero negativo no existe !!\nEl factorial de un numero negativo no existe !!\n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("El factorial de %d = %llu", n, fact);
    }

    return 0;
}