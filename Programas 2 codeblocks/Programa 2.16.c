#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int CLA, CAT, ANT, RES = 0;

    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
    scanf("%d %d %d", &CLA, &CAT, &ANT);

    switch (CAT) {
        case 3:
        case 4: {
            if (ANT >= 5) {
                RES = 1;
            } else {
                RES = 0;
            }
            break;
        }

        case 2: {
            if (ANT >= 7) {
                RES = 1;
            } else {
                RES = 0;
            }
            break;
        }

        default: {
            RES = 0;
            break;
        }
    }


    if (RES == 1) {
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto\n", CLA);
    } else {
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto\n", CLA);
    }

    return 0;
}
