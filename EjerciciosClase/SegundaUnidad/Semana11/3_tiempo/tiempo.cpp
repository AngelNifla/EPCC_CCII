/*///////////////////////ENUNCIADO/////////////////////////////
Implemente una clase que maneje tiempos sin fechas, en formato de 24 horas.
Por ejemplo, Tiempo(6, 45, 30) representa 6 horas con 45 minutos y 30 segundos.
    a) Sobrecargue los operadores + y - para sumar y restar tiempos.
    Por ejemplo si definimos Tiempo t1(12, 45, 30) y t2(0, 30, 35)
    la suma t1 + t2 debe resultar en Tiempo(13, 16, 5).
    b) Sobrecargue los operadores de igualdad ==, != y de comparación <, >, <=, >=
    c) Sobrecargue el operador de extracción para mostrar las horas.
    d) Implemente métodos adecuados para mostrar las horas en formato am / pm.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include "Tiempo.h"         //Se incluye codigo del archivo especificado.

int main()      //Funcion Principal.
{
    Tiempo T1(12,45,30),T2(0,30,35);     //Se crea dos objetos Tiempo base.
    Tiempo T3{T1+T2};       //Se crea un objeto con la suma (sobrecarga del operador +) de los dos objetos base.
    Tiempo T4{T3-T2};       //Se crea un objeto con la resta (sobrecarga del operador -) de los dos objetos base.

    std::cout<<"T1: ">>T1;      //Mostramos los pobjetos con la sobrecarga de operador >>.
    std::cout<<"T2: ">>T2;      //Mostramos los pobjetos con la sobrecarga de operador >>.
    std::cout<<"T3: ">>T3;      //Mostramos los pobjetos con la sobrecarga de operador >>.
    std::cout<<"T4: ">>T4;      //Mostramos los pobjetos con la sobrecarga de operador >>.

    if (T1 == T4)       //Analizamos las sobrecargas de operador ==.
    {
        std::cout<<"-> T1 y T4 son iguales\n";
    }else
    {
        std::cout<<"-> T1 y T4 no son iguales\n";
    }
    if (T1 != T3)       //Analizamos las sobrecargas de operador !=.
    {
        std::cout<<"-> T1 y T3 son diferentes\n";
    }else
    {
        std::cout<<"-> T1 y T3 no son diferentes\n";
    }
    if (T1<T2)      //Analizamos las sobrecargas de operador <.
    {
        std::cout<<"-> T1 es menor que T4\n";
    }else
    {
        std::cout<<"-> T1 no es menor que T4\n";
    }
    if (T3>T1)      //Analizamos las sobrecargas de operador >.
    {
        std::cout<<"-> T3 es mayor que T1\n";
    }else
    {
        std::cout<<"-> T3 no es mayor que T1\n";
    }
    if (T1<=T4)     //Analizamos las sobrecargas de operador <=.
    {
        std::cout<<"-> T1 es menor o igual que T4\n";
    }else
    {
        std::cout<<"-> T1 no es menor o igual que T4\n";
    }
    if (T4>=T1)     //Analizamos las sobrecargas de operador >=.
    {
        std::cout<<"-> T4 es mayor o igual que T1\n";
    }else
    {
        std::cout<<"-> T4 no es mayor o igual que T1\n";
    }
    
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\3_tiempo> .\\a
T1: 0 : 0 : 0 AM
T2: 2 : 5 : 5 AM
T3: 2 : 5 : 5 AM
T4: 0 : 0 : 0 AM
-> T1 y T4 son iguales
-> T1 y T3 son diferentes
-> T1 es menor que T4
-> T3 es meyor que T1
-> T1 es menor o igual que T4
-> T4 es meyor o igual que T1
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\3_tiempo> .\\a       
T1: 12 : 45 : 30 PM
T2: 0 : 30 : 35 AM 
T3: 13 : 16 : 5 PM 
T4: 12 : 45 : 30 PM
-> T1 y T4 son iguales
-> T1 y T3 son diferentes
-> T1 no es menor que T4
-> T3 es mayor que T1
-> T1 es menor o igual que T4
-> T4 es mayor o igual que T1
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\3_tiempo>

*/