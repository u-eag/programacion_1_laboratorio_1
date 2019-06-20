#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

int parser_parseEmpleados(char* fileName, LinkedList* listaEmpleados)
{
    int retorno = 1;
    char bufferId[4096];
    char bufferNombre[4096];
    char bufferHorasTrabajadas[4096];
    char bufferSueldo[4096];
    Employee *pEmpleado;
    int cantidadDatos; // para saber si la cantidad de elementos que saqu� del archivo est� ok

    FILE* pFile = fopen(fileName, "r");

    if(pFile != NULL)
    {
        fscanf(pFile,"%[^,],%[^,],%[^\n]\n",  bufferId,
                                            bufferNombre,
                                            bufferHorasTrabajadas);
        while(!feof(pFile))
        {
            cantidadDatos = fscanf(pFile,"%[^,],%[^,],%[^\n]\n",  bufferId,
                                                                    bufferNombre,
                                                                    bufferHorasTrabajadas);

            if(cantidadDatos == 3) // chequeo si recib� los 4 datos que ped�
            {
                pEmpleado = employee_newParametros(     bufferId,
                                                        bufferNombre,
                                                        bufferHorasTrabajadas,
                                                        bufferSueldo); // ac� se carga basura

                if(pEmpleado != NULL)
                {
                    if(!ll_add(listaEmpleados,pEmpleado))
                    {
                        retorno = 0;
                    }
                }
            }
        }
    }

    fclose(pFile);

    return retorno;
}

