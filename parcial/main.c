#include <stdio.h>
#include <stdlib.h>
#include "ABM_Biblioteca.h"
#include "input.h"

#define TAM_SOC 1000 // cantidad máxima de socios de la biblioteca
                // 1000
#define TAM_PREST 1000 // cantidad máxima de prestamos de la biblioteca
                // 1000

int main()
{
    Autores arrayAutores[10]=
    {
        {1000, "Miguel", "de Cervantes"},
        {1001, "William ", "Shakespeare"},
        {1002, "Dante", "Alighieri"},
        {1003, "Leon", "Tolstoi"},
        {1004, "Gustave", "Flaubert"},
        {1005, "Jorge Luis", "Borges"},
        {1006, "Franz", "Kafka"},
        {1007, "Marcel", "Proust"},
        {1008, "Fiodor", "Dostoievsky"},
        {1009, "Albert", "Camus"},
    };

    Libros arrayLibros[10]=
    {
        {100,"Don Quijote de la Mancha",1000},
        {101,"Hamlet",1001},
        {102,"La divina comedia",1002},
        {103,"La guerra y la paz",1003},
        {104,"Madame Bovary",1004},
        {105,"El Aleph",1005},
        {106,"El proceso",1006},
        {107,"En busca del tiempo perdido",1007},
        {108,"Los hermanos Karamazov",1008},
        {109,"El extranjero",1009},
    };

    Socios arraySocios[TAM_SOC];
    Prestamos arrayPrestamos[TAM_PREST];

    char botonMenu='Z'; // lo inicializo en Z para que no se de la casualidad de que arranque en H y salga del menu

    initSocios(arraySocios, TAM_SOC);
    initPrestamos(arrayPrestamos, TAM_PREST);

    do{
        system("cls");

        printf("*** MENU PRINCIPAL - BIBLIOTECA ***\n\n");
        printf("A. Alta\n");
        printf("B. Modificar\n");
        printf("C. Baja\n");
        printf("D. Listar socios\n");
        printf("E. Listar libros\n");
        printf("F. Listar autores\n");
        printf("G. Prestamos\n");
        printf("H. Salir\n\n");

        getChar(&botonMenu,"Seleccione una opcion del menu: ","\nOpcion no valida\n\n",'A','H',1);

        switch(botonMenu)
        {
            case 'A': // Alta
                altaSocios(arraySocios, TAM_SOC);
                system("pause");
                break;

            case 'B': // Modificar: nombre, apellido, sexo, telefono y mail
                system("pause");
                break;

            case 'C': // Baja
                system("pause");
                break;

            case 'D': // Listar socios

                system("pause");
                break;

            case 'E': // listar libros
                printLibros(arrayLibros,10);
                system("pause");
                break;

            case 'F': // listar autores
                printAutores(arrayAutores,10);
                system("pause");
                break;

            case 'G': // alta prestamo
                system("pause");
                break;

            case 'H': // salir
                break;

        }

    }while(botonMenu!='H');

    return 0;
}
