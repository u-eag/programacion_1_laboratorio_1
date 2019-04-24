#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
static int generarId();
int initEmp (eEmpleado* arrayEmpleado, int cantidad)
{
    int retorno=-1;
    int i;

    if(arrayEmpleado!=NULL && cantidad>0)
    {
        retorno=0;
        for(i=0;i<cantidad;í++)
        {
            arrayEmpleado[i].isEmpty=1;
        }
    }

    return retorno;
}

int buscarLugarVacio (eEmpleado* arrayEmpleado, int cantidad, int* indiceVacio)
{
    int retorno = -1;
    int i;

    if(arrayEmpleado!=NULL && cantidad>0)
    {
        for(i=0;i<cantidad,i++)
        {
            if(arrayEmpleado[i].isEmpty==1)
            {
                *indiceVacio=i;
                retorno=0;
                break;
            }

        }
    }

    return retorno;
}
int buscarEmpleadoPorId (eEmpleado* arrayEmpleado, int cantidad, int idEmp, int* indiceId)
{
    int retorno = -1;
    int i;
    if(arrayEmpleado!=NULL && cantidad>0)
    {
        for(i=0;i<cantidad;i++)
        {
            if(arrayEmpleado[i].idEmpleado == idEmp && arrayEmpleado[i].isEmpty==0)
            {
                *indiceId=i;
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}
static int generarId()
{
    static int contadorId=0;
    return contadorId++;
}
int altaEmpleado (eEmpleado* arrayEmpleado, int cantidad)
{
    int retorno=-1;
    int auxIndice;

    char auxApellido[51];
    char auxNombre[51];
    char auxSexo;
    int auxSalario;
    int auxFechaIngreso; //dia, mes, año
    int idSector;

    if (buscarLugarVacio(arrayEmpleado, cantidad, &auxIndice)==0)
    {
        if(arrayEmpleado!=NULL && cantidad>0)
        {
            if(utn_getLetras(auxNombre,51,2,"Ingrese Nombre","Error. ingrese solo letras")==0)
            {
                if(utn_getLetras(auxApellido,51,3,"Ingrese Apellido: ","Error. Ingrese nuevamente el apellido.")==0)
                {
                    if(utn)
                }
            }
        }
    }

    return retorno;
}
