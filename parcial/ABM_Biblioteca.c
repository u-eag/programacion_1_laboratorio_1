#include "ABM_Biblioteca.h"
#include "input.h"

int initSocios(Socios* list, int len)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int i;

    if(len>0)
    {
        for(i=0;i<len;i++)
        {
            list[i].isEmpty=1;
        }
        result=0;
    }

    return result;
}

int initPrestamos(Prestamos* list, int len)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int i;

    if(len>0)
    {
        for(i=0;i<len;i++)
        {
            list[i].isEmpty=1;
        }
        result=0;
    }

    return result;
}

int printSocios(Socios* list, int length)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int i;

    for(i=0;i<length;i++)
    {
        if(list[i].isEmpty==0)
        {
            printf("\n\tid \tNombre \tApellido \tSexo \tTelefono \teMail \tFecha de ingreso \n\n");
            printf("\t%d \t%s \t%s \t%c \t%s \t%s \t%d \n\n",list[i].idSocios,list[i].nombre,list[i].apellido,list[i].sexo,list[i].telefono,list[i].mail,list[i].fechaAsociado);
        }
    }

    return result;
}
int printLibros(Libros* list, int length)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int i;

    printf("\n\tid \tTitulo \tAutor \n\n");
    for(i=0;i<length;i++)
    {
        printf("\t%d \t%s \t\t%d \n", list[i].idLibros, list[i].titulo, list[i].idAutor);
        result=0;
    }
    printf("\n");

    return result;
}

int printAutores(Autores* list, int length)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int i;

    printf("\n\tid \tNombre \t\tApellido \n\n");
    for(i=0;i<length;i++)
    {
        printf("\t%d \t%s \t\t%s \n", list[i].idAutores, list[i].nombre, list[i].apellido);
        result=0;
    }
    printf("\n");

    return result;
}

int findEmptyIndexSocios(Socios* list, int length, int* index)
{
    int result=-1;
    int i;

    for(i=0;i<length;i++)
    {
        if(list[i].isEmpty==1)
        {
            *index=i;
            result=0;
            break;
        }
    }

    return result;
}

int findEmptyIndexPrestamos(Prestamos* list, int length, int* index)
{
    int result=-1;
    int i;

    for(i=0;i<length;i++)
    {
        if(list[i].isEmpty==1)
        {
            *index=i;
            result=0;
            break;
        }
    }

    return result;
}

int altaSocios(Socios* list, int len)
{
    int result=-1; // devuelve -1 si hay error y 0 si está todo ok
    int emptyIndex;
    int flagIndex=0; // para saber si se encontró un índice libre
    Socios aux; // para guardar los datos ingresados

    // primero busco un lugar libre:
    if((findEmptyIndexSocios(list,len,&emptyIndex))==0)
    {
        flagIndex=1;
    }

    // si encuentro un lugar libre pido los datos, los valido y los guardo
    if(flagIndex)
    {
        // asigno los datos a los 8 campos de la estructura Socios:

        // 1. campo isEmpty
        aux.isEmpty=0; // ya no está más vacío

        // 2. idSocios
        aux.idSocios=emptyIndex;

        // 3. nombre[31]
        getString(aux.nombre,"\nIngrese el nombre: \n","\nIngreso invalido\n",1,31,1);

        // 4. apellido[31]
        getString(aux.apellido,"\nIngrese el apellido: \n","\nIngreso invalido\n",1,31,1);

        // 5. sexo
        printf("Ingrese el sexo[F][M]: ");
        scanf("%c",&aux.sexo);

        // 6. telefono[16]
        printf("\nIngrese el telefono: ");
        gets("%s",&aux.telefono);

        // 7. mail[31]
        getString(aux.mail, "\nIngrese el eMail: ", "\nIngreso invalido",6,31,1);

        // 8. fechaAsociado
        getInt(aux.fechaAsociado.dia, "\nIngrese dia de asociacion: ", "\nIngreso invalido",1,31,1);
        getInt(aux.fechaAsociado.mes, "\nIngrese mes de asociacion: ", "\nIngreso invalido",1,12,1);
        getInt(aux.fechaAsociado.anio, "\nIngrese dia de asociacion: ", "\nIngreso invalido",1,2019,1);

        // si está todo bien, asigno los datos:
        list[emptyIndex]=aux;

        result=0;
    }

    return result;
}
