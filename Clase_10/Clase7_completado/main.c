#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define LEN_LISTA    100
#define CANT_EMP 100

/*
int buscarLibre(char lista[][20],
                int len,
                int* pIndex)
{
    int i;
    int ret=-1;
    for(i=0; i<len ; i++)
    {
        if(lista[i][0]=='\0')
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;

}

int buscarNombre(char* pNombre,
                 char lista[][20],
                 int len,
                 int* pIndex
)
{
    int i;
    int ret=-1;
    for(i=0; i<len; i++)
    {
        if(strcmp(pNombre,lista[i])==0)
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;
}
*/

typedef struct
{
    int isEmpty;
    int idEmpleado;
    char nombre[50];
    char apellido[50];
}Empleado;

int main()
{
    Empleado arrayEmpleados[CANT_EMP];

    int opcion=0;

/*    char nombres[LEN_LISTA][20];
    int i,posLibre,posAeliminar;
    char buffer[20];

    // Inicializo la lista de nombres
    for(i=0; i<LEN_LISTA;i++)
        nombres[i][0]='\0';
    //_______________________________
*/

    // 1) funcion para inicializar el array de empleados:
    for(int i=0;i<CANT_EMP;i++)
    {
        arrayEmpleados[i].isEmpty=1;
    }

    // 2) funcion para mostrar el array (los lugares ocupados):
    for(int i=0;i<CANT_EMP;i++)
    {
        if(arrayEmpleados[i].isEmpty==0)
        {
            printf("%d %d %s %s", arrayEmpleados[i].isEmpty, arrayEmpleados[i].idEmpleado, arrayEmpleados[i].nombre, arrayEmpleados[i].apellido);
        }
    }

    // 3) funcion para mostrar un lugar libre:
    int indiceLibre;
    for(int i=0;i<CANT_EMP;i++)
    {
        if(arrayEmpleados[i].isEmpty==1)
        {
            indiceLibre=i;
            break;
        }
    }

    // 4) funcion para guardar los datos
    Empleado auxiliar;
    //desde el mail llamo a la funcion altaEmpleado para que: 1. busca un lugar libre, 2. pide los datos, 3. los valida, 4. los guarda en la variable definitiva


    while(opcion!=5)
    {
        utn_getNumber(&opcion,
                      "1)ingresar\n2)listar\n4)eliminar\n5)Salir\n",
                      "NO!",
                      1,10,2);

        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre\n");

                if(buscarLibre(nombres,LEN_LISTA,&posLibre)==0)
                {
                    printf("Se encontro lugar en %d\n",posLibre);

                    utn_getString(buffer,"Ingrese nombre:","No!",0,20,1);

                    strncpy(nombres[posLibre],buffer,20);
                }
                else
                    printf("No hay mas lugar!\n");

                break;
            }
            case 2:
            {
                /*
                for(i=0;i<10; i++)
                    printf("-%d: %s\n",i,nombres[i]);
                */

                break;
            }
            case 4:
            {
                // PIDO NOMBRE
                utn_getString(buffer,"Ingrese nombre a borrar:","No!",0,20,1);

                // en buffer esta el nombre
                if(buscarNombre(buffer,nombres,LEN_LISTA,&posAeliminar)==0)
                {
                    //borro
                    nombres[posAeliminar][0]='\0';
                    printf("Eliminado\n");
                }
                else
                    printf("No existe el nombre\n");
                break;
            }
        }
    }

    return 0;
}



