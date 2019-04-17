/** \brief Esta funci�n calcula la suma de dos n�meros enteros (x+y).
 *
 * \param Se ingresa un n�mero entero.
 * \param Devuelve un n�mero entero.
 * \return Devuelve la suma de dos enteros.
 *
 */
int suma (int x, int y);

/** \brief Esta funci�n calcula la resta de dos n�meros enteros (x-y).
 *
 * \param Se ingresa un n�mero entero.
 * \param Devuelve un n�mero entero.
 * \return Devuelve la resta de dos enteros.
 *
 */
int resta (int x, int y);

/** \brief Esta funci�n calcula la divisi�n de dos n�meros enteros (x/y).
 *
 * \param Se ingresa un n�mero entero.
 * \param Devuelve un n�mero flotante.
 * \return Devuelve la divisi�n de dos enteros.
 *
 */
float division (int x, int y);

/** \brief Esta funci�n calcula la multiplicaci�n de dos n�meros enteros (x*y).
 *
 * \param Se ingresa un n�mero entero.
 * \param Devuelve un n�mero entero.
 * \return Devuelve la multiplicaci�n de dos n�meros enteros.
 *
 */
int multiplicacion (int x, int y);

/** \brief Esta funci�n calcula el factorial de un n�mero x (x!).
 *
 * \param Se ingresa un n�mero entero.
 * \param Devuelve un n�mero entero.
 * \return Devuelve el resultado del factorial si el n�mero ingresado es igual o mayor a cero.
 *         Devuelve -1 para indicar error si el n�mero ingresado es negativo.
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


