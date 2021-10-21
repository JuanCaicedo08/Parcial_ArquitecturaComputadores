#include <stdio.h>

int main() {

    int n1, n2, max;
    printf("Digite dos numeros positivos: ");
    scanf("%d %d", &n1, &n2);

    // Número máximo entre n1 y n2 se almacena en max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("El MCI de %d y %d es %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}