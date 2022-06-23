/*///////////////////////ENUNCIADO/////////////////////////////
Desarrolle una clase Cuadrática que represente una función de la
forma 𝑓(𝑥) = 𝑎𝑥2 + 𝑏𝑥 + 𝑐, donde x es un variable real y a, b, c
son constantes reales. La clase debe cumplir con los siguientes requisitos:
    a) Proporcione un constructor que tome los valores de a, b y c como argumentos.
        Estos argumentos deben ser cero por defecto.
    b) La clase debe proporcionar constructor copia y operador de asignación
    c) Proporcione el operador de llamada a función que tome un solo argumento
    x y devuelva el valor f(x).
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include "Cuadratico.h"         //Se incluye codigo del archivo especificado.

int main()          //Funcion principal.
{
    std::cout<<"Creando objeto por parametro C1: C1(2.0,3.0,2.0).\n";
    std::cout<<"Creando objeto con copia C2: C2(C1).\n";
    std::cout<<"Creando objeto por defecto C3.\n\n";

    Cuadratico C1(2.0,3.0,2.0);         //Creando objeto por parametro.
    Cuadratico C2(C1);          //Creando objeto con copia.
    Cuadratico C3;          //Creando objeto por defecto.

    std::cout<<"->Funcion C1: "<<C1;        //Mostrando funcion por operador de insercion.
    std::cout<<"->Funcion C2: "<<C2;        //Mostrando funcion por operador de insercion.
    std::cout<<"->Funcion C3: "<<C3;        //Mostrando funcion por operador de insercion.
    std::cout<<"\nUtilizando el operador de asignacion C3 = C2:\n\n";
    C3 = C2;            //Usando operador de asignacion.
    std::cout<<"->Nuvea Funcion C3: "<<C3;      //Mostrando funcion por operador de insercion.
    std::cout<<"->Resultado de la Funcion C3 con x=2.0: C3(2.0) = "<<C3(2.0);   //Mostrando el resultado por operador de llamada.

    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\5_cuadrático> .\\a
Creando objeto por parametro C1: C1(2.0,3.0,2.0).
Creando objeto con copia C2: C2(C1).
Creando objeto por defecto C3.

->Funcion C1: F(x) = 2x^2 + 3x + 2
->Funcion C2: F(x) = 2x^2 + 3x + 2
->Funcion C3: F(x) = 0x^2 + 0x + 0

Utilizando el operador de asignacion C3 = C2:

->Nuvea Funcion C3: F(x) = 2x^2 + 3x + 2
->Resultado de la Funcion C3 con x=2.0: C3(2.0) = 16
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\5_cuadrático>

*/