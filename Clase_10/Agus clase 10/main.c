#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "fantasma.h"
#define FANTASMAS 5
#include <string.h>
int main()
{
   /* for(i=0;i<cantidadElementos-1;i++)
        for(j=i+1;i<cantidadElementos;j++)
    {
        if(array[i] > ascendente o < descendente array[j])
            aux=array[i];
        array[i]=array[j];
        array[j]=aux;
    }*/
    int auxiliarIdMain;
    int auxiliarIndiceMain;
    Fantasma arrayFantasmaMain[FANTASMAS];
    Fantasma_init(arrayFantasmaMain,FANTASMAS);
    int opcion=0;

    do
    {
        printf("\n1-Alta Cliente: \n2-Mostrar: \n3-Modificar datos Cliente: \n4-Venta de afiches: \n5-Modificar Venta: \n6-Listar Clientes: \n7-Listar Ventas \n8-Cobrar Venta:\n9-Imprimir clientes (con sus ventas)\n10-Informes: \n"); //adentro para imprimir
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
            if(Fantasma_buscarIndiceVacio(arrayFantasmaMain,FANTASMAS,&auxiliarIndiceMain)==0)
            {
                Fantasma_alta(arrayFantasmaMain,FANTASMAS);
                printf("\nSe ha dado de alta al fantasma\n");
            }
                    else
                    {
                        printf("\nError, espacio lleno.\n");
                    }
            break;

            case 2:
            Fantasma_mostrar(arrayFantasmaMain,FANTASMAS);
            break;

            case 3:
            if(utn_getEntero(&auxiliarIdMain,2,"\nIngrese id a modificar: \n", "\nError. No es un id valido.\n",0,100)==0)
            {
                if(Fantasma_buscarPorIdEIndiceId(arrayFantasmaMain,FANTASMAS,auxiliarIdMain,&auxiliarIndiceMain)==0)
                {
                    Fantasma_modificarFantasma(arrayFantasmaMain,FANTASMAS,auxiliarIndiceMain,auxiliarIdMain);
                    printf("\nSe ha modificado el fantasma.\n");
                }
                else
                {
                    printf("\nError, no se encontro ID\n");
                }
            }
            break;
        }
    }while(opcion!=0);

    return 0;
}
