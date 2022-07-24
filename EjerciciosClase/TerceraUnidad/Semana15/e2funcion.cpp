/*////////////////////////////ENUNCIADO////////////////////////////

Escriba una función de tal forma que usted pueda invocar a cualquiera de
las funciones siguientes.
    float sumafi(float a, int b) {
    return a + b;
    }
    double restalf(float a, double b) {
    return a - b;
    }
    long multiplicaid(int a, long b) {
    return a * b;
    }

Forma de llamar a la función:
    funcion(sumafi, 4.0f, 5);
    funcion(restalf, 4.0f, 5.0);
    funcion(multiplicaid, 4, 5L);
*/

/*////////////////////////////CODIGO////////////////////////////*/
#include <iostream>

float sumafi(float a, int b)        //Funcion para la suma.
{
    return a + b;
}

double restalf(float a, double b)       //Funcion para la resta.
{
    return a - b;
}

long multiplicaid(int a, long b)        //Funcion para la multiplicacion.
{
    return a * b;
}

template<typename T,typename R,typename N>      //Plantilla para el tipo de parametros.
T funcion(T (*op)(R,N),R a,N b)         //Funcion que llama a otra funcion determinada.
{
    return op(a,b);         //Llamada a una determinada funcion.
}

int main()          //Funcion Principal
{
    std::cout<<"Suma: "<<funcion(sumafi, 4.0f, 5)<<"\n";            //Llamada a la funcion.
    std::cout<<"Suma: "<<funcion(sumafi, 3.5f, 8)<<"\n";            //Llamada a la funcion.
    std::cout<<"Resta: "<<funcion(restalf, 4.0f, 5.0)<<"\n";            //Llamada a la funcion.
    std::cout<<"Resta: "<<funcion(restalf, 40.3f, 15.6)<<"\n";          //Llamada a la funcion.
    std::cout<<"Multiplicacion: "<<funcion(multiplicaid, 4, 5L)<<"\n";          //Llamada a la funcion.
    std::cout<<"Multiplicacion: "<<funcion(multiplicaid, 5, 8L)<<"\n";          //Llamada a la funcion.
    return 0;
}

/*////////////////////////////EJECUCION////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15> g++ e2funcion.cpp
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15> .\\a
Suma: 9
Suma: 11.5
Resta: -1
Resta: 24.7
Multiplicacion: 20
Multiplicacion: 40
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15>

*/