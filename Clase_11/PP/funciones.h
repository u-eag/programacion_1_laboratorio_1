#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct
{
    int idEmpleado; //legajo
    char apellido[51];
    char nombre[51];
    char sexo;
    int salario;
    int fechaIngreso; //dia, mes, año
    int idSector;
    int isEmpty;
}eEmpleado;

int initEmp (eEmpleado* arrayEmpleado,int cantidad);
int buscarLugarVacio (eEmpleado* arrayEmpleado, int cantidad, int* indiceVacio);
int buscarEmpleadoPorId (eEmpleado* arrayEmpleado, int cantidad, int idEmp, int* indiceId);

#endif // FUNCIONES_H_INCLUDED
