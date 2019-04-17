#ifndef FANTASMA_H_INCLUDED
#define FANTASMA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int edad;
    int isEmpty;
}Fantasma;

int Fantasma_buscarIndiceVacio(Fantasma* arrayFantasma, int cantidadElementos, int* indice);
int Fantasma_mostrar(Fantasma* arrayFantasma, int cantidadElementos);
int Fantasma_init(Fantasma* arrayFantasma, int cantidadElementos);
int Fantasma_buscarPorIdEIndiceId(Fantasma* arrayFantasma, int cantidadElementos, int ID, int* indiceID);
int Fantasma_modificarFantasma(Fantasma* arrayFantasma, int cantidadElementos, int indice, int id);
int Fantasma_alta(Fantasma* arrayFantasma, int cantidadElementos);
#endif // FANTASMA_H_INCLUDED
