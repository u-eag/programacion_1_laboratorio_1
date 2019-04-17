#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"

int main()
{
    eEmpleado emP[5];

    /*printf("Ingrese el legajo: ");
    fflush(stdin);
        emP.legajo*/

    int boton;

    //botón salir:
    int flagSeguir=1;
    do {
        printf("Seleccione una opcion del menu:\n");
        printf("\n1. Alta");
        printf("\n2. Modificacion");
        printf("\n3. Baja");
        printf("\n4. Salir\n");
        scanf("%d", &boton);

        switch (boton) {

            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                flagSeguir=0;
                break;

        }

    } while (flagSeguir);


    return 0;
}
