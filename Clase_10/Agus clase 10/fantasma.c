#include <stdio.h>
#include <stdlib.h>
#include "fantasma.h"
#include <string.h>
#include "utn.h"

static int generarId();
int Fantasma_init(Fantasma* arrayFantasma, int cantidadElementos)
{
    int retorno=-1;
    int i;
    if(arrayFantasma!=NULL && cantidadElementos>0)
    {
        retorno=0;
        for(i=0;i<cantidadElementos;i++)
        {
            arrayFantasma[i].isEmpty/*bandera*/=1;
            //definis clintes 100
        }
    }
    return retorno;
}

int Fantasma_mostrar(Fantasma* arrayFantasma, int cantidadElementos)
{
    int retorno=-1;
    int i;
    if(arrayFantasma!=NULL && cantidadElementos>0)
    {
        for(i=0;i<cantidadElementos;i++)
        {
            if(arrayFantasma[i].isEmpty!=1)
            {
                printf("MOSTRAR: nombre:%s - apellido:%s - edad:%d - id:%d - isEmpty:%d\n",
                arrayFantasma[i].nombre,arrayFantasma[i].apellido,arrayFantasma[i].edad,arrayFantasma[i].id,arrayFantasma[i].isEmpty);
                retorno=0;
            }
        }
    }
    return retorno;
}
int Fantasma_buscarIndiceVacio(Fantasma* arrayFantasma, int cantidadElementos, int* indice)
{
    int retorno=-1;
    int i;
    if(arrayFantasma!=NULL && cantidadElementos>0)
    {
        for(i=0;i<cantidadElementos;i++)
        {
            if(arrayFantasma[i].isEmpty==1)
            {
                *indice=i;
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

int Fantasma_buscarPorIdEIndiceId(Fantasma* arrayFantasma, int cantidadElementos, int ID, int* indiceID)
{
    int retorno=-1;
    int i;
    if(arrayFantasma!=NULL && cantidadElementos>0)
    {
        for(i=0; i<cantidadElementos;i++)
        {
            if(arrayFantasma[i].id == ID && arrayFantasma[i].isEmpty ==0)
            {
                *indiceID=i;
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}

int Fantasma_alta(Fantasma* arrayFantasma, int cantidadElementos)
{
    int retorno=-1;
    char auxiliarNombre[50];
    char auxiliarApellido[50];
    int auxiliarEdad;
    int indiceLugar;
    if(Fantasma_buscarIndiceVacio(arrayFantasma,cantidadElementos,&indiceLugar)==0)
    {
        if(arrayFantasma!=NULL && cantidadElementos>0)
        {
            if(utn_getLetras(auxiliarNombre,50,2,"\nIngrese nombre: \n","\nError, no es un nombre valido.\n")==0)
            {
                if(utn_getLetras(auxiliarApellido,50,2,"\nIngrese apellido: \n","\nError, no es un apellido valido.\n")==0)
                {
                    if(utn_getEntero(&auxiliarEdad,2,"\nIngrese Edad: \n", "\nError, no es una edad valida. \n",1,100)==0)
                    {
                        strncpy(arrayFantasma[indiceLugar].nombre, auxiliarNombre,50);
                        strncpy(arrayFantasma[indiceLugar].apellido,auxiliarApellido,50);
                        arrayFantasma[indiceLugar].edad=auxiliarEdad;
                        arrayFantasma[indiceLugar].isEmpty=0;
                        arrayFantasma[indiceLugar].id=generarId();
                    }
                }
            }
        }
    }
    return retorno;
}

int Fantasma_modificarFantasma(Fantasma* arrayFantasma, int cantidadElementos, int indice, int id)
{
    int retorno=-1;
    char auxiliarNombre[50];
    char auxiliarApellido[50];
    int auxiliarEdad;

    if(Fantasma_buscarPorIdEIndiceId(arrayFantasma,cantidadElementos,id,&indice)==0)
    {
        if(arrayFantasma!=NULL && cantidadElementos>0)
        {
            if(utn_getLetras(auxiliarNombre,50,2,"\nIngrese nombre: \n","\nError, no es un nombre valido.\n")==0)
            {
                if(utn_getLetras(auxiliarApellido,50,2,"\nIngrese apellido: \n","\nError, no es un apellido valido.\n")==0)
                {
                    if(utn_getEntero(&auxiliarEdad,2,"\nIngrese Edad: \n", "\nError, no es una edad valida. \n",1,100)==0)
                    {
                        strncpy(arrayFantasma[indice].nombre, auxiliarNombre,50);
                        strncpy(arrayFantasma[indice].apellido,auxiliarApellido,50);
                        arrayFantasma[indice].edad=auxiliarEdad;
                        retorno=0;
                    }
                }
            }
        }
    }
    return retorno;
}
