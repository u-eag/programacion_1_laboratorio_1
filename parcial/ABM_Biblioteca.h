#ifndef ABM_BIBLIOTECA_H_INCLUDED
#define ABM_BIBLIOTECA_H_INCLUDED

typedef struct
{
    int idAutores; // Código de Autor (autoincremental arrancando en 1000)
    char nombre[31];
    char apellido[31];
}Autores;

typedef struct
{
    int idLibros; // Código de Libro (autoincremental arrancando en 100)
    char titulo[51];
    int idAutor;
}Libros;

typedef struct
{
    int dia;
    int mes;
    int anio;
}Fecha;

typedef struct
{
    int isEmpty;
    int idSocios; // Código de Socio (autoincremental arrancando en 0)
    char nombre[31];
    char apellido[31];
    char sexo; // [F][M]
    char telefono[16]; // 16 caracteres
    char mail; // 31 caracteres
    Fecha fechaAsociado;
}Socios;

typedef struct
{
    int isEmpty;
    int idPrestamos; // Còdigo del Préstamo (autoincremental a partir de 0)
    int idLibro; // Código del Libro
    int idSocio; // Código del Socio
    Fecha fechaPrestamo;
}Prestamos;

int initSocios(Socios* list, int len);
int initPrestamos(Prestamos* list, int len);
int printSocios(Socios* list, int length);
int printLibros(Libros* list, int length);
int printAutores(Autores* list, int length);
int findEmptyIndexSocios(Socios* list, int length, int* index);
int findEmptyIndexPrestamos(Prestamos* list, int length, int* index);

#endif // ABM_BIBLIOTECA_H_INCLUDED
