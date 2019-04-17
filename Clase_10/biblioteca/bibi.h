/** \brief Esta función calcula la suma de dos números enteros (x+y).
 *
 * \param Se ingresa un número entero.
 * \param Devuelve un número entero.
 * \return Devuelve la suma de dos enteros.
 *
 */
int suma (int x, int y);

/** \brief Esta función calcula la resta de dos números enteros (x-y).
 *
 * \param Se ingresa un número entero.
 * \param Devuelve un número entero.
 * \return Devuelve la resta de dos enteros.
 *
 */
int resta (int x, int y);

/** \brief Esta función calcula la división de dos números enteros (x/y).
 *
 * \param Se ingresa un número entero.
 * \param Devuelve un número flotante.
 * \return Devuelve la división de dos enteros.
 *
 */
float division (int x, int y);

/** \brief Esta función calcula la multiplicación de dos números enteros (x*y).
 *
 * \param Se ingresa un número entero.
 * \param Devuelve un número entero.
 * \return Devuelve la multiplicación de dos números enteros.
 *
 */
int multiplicacion (int x, int y);

/** \brief Esta función calcula el factorial de un número x (x!).
 *
 * \param Se ingresa un número entero.
 * \param Devuelve un número entero.
 * \return Devuelve el resultado del factorial si el número ingresado es igual o mayor a cero.
 *         Devuelve -1 para indicar error si el número ingresado es negativo.
 */
int factorial (int x);

// hacer una funcion para get char, para get int y para get float (para el parcial) en una biblioteca que se llame input

// aca va la estructura y debajo el prototipo

// en las bibl de agus: input es "utn" y empleado es "fantasma"
typedef struct{
    int dia, mes, anio;
}eFecha;

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int ocupado;
    eFecha fechaNac;
        //eFecha es una estructura anidada a la estructura eEmpleado
    int idSector;
}eEmpleado;

// armar cada biblioteca aparte para poder reutilizarlas

int alta (eEmpleado* arrayEmpleado, int cantidadEmpleados);

typedef struct{

}


