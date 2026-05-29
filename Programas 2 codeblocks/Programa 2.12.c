#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // 1. Usamos float para que pow() funcione bien y las divisiones tengan decimales
    float T, P, N;

    printf("Ingrese los valores de T, P y N: ");
    // 2. Usamos %f porque ahora son flotantes
    scanf("%f %f %f", &T, &P, &N);

    // 3. Primero validamos que P no sea cero para evitar división por cero
    if (P == 0) {
        printf("\nP tiene que ser diferente de cero\n");
    }
    // 4. Si no es cero, procedemos a realizar la comparación matemática
    else {
        // Comparamos si (T/P)^N es igual a (T^N)/(P^N)
        if (pow(T / P, N) == (pow(T, N) / pow(P, N))) {
            printf("\nSe comprueba la igualdad\n");
        } else {
            printf("\nNo se comprueba la igualdad\n");
        }
    }

    return 0;
}
