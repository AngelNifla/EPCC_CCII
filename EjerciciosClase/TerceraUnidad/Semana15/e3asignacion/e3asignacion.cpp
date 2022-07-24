/*////////////////////////////ENUNCIADO////////////////////////////

Considerando el código de LinkedList
https://drive.google.com/drive/folders/1ow9DIEuGdD8yM48RGyFGxGU4GWCXeNo?usp=sharing
Implemente el operador de asignación.
Escriba código de ejemplo para probar su implementación.

*/

/*////////////////////////////CODIGO////////////////////////////*/
#include "LinkedList.h"     //Incluyendo codigo del archivo especificado.

int main()          //Funcion Principal
{
    LinkedList L1;      //Creado Lista 1.
    std::cout<<"L1: ";
    for (int i = 1; i < 11; i++)        //Insertando datos a L1.
    {
        L1.insert(i);
    }

    L1.imprimir();          //Imprimiendo Lista L1.

    LinkedList L2;      //Creado Lista 2.
    std::cout<<"L2: ";
    for (int i = 10; i <21; i++)        //Insertando datos a L2.
    {
        L2.insert(i);
    }
    
    L2.imprimir();          //Imprimiendo Lista L2.

    L1=L2;          //Utilizando el operador de asignacion.
    std::cout<<"L1=L2 -> L1: ";
    L1.imprimir();          //Imprimiendo nuevos valores de L1.
    
    return 0;
}

/*////////////////////////////EJECUCION////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15\e3asignacion> g++ e3asignacion.cpp Node.cpp LinkedList.cpp
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15\e3asignacion> .\\a
L1: 1 2 3 4 5 6 7 8 9 10
L2: 10 11 12 13 14 15 16 17 18 19 20
L1=L2 -> L1: 10 11 12 13 14 15 16 17 18 19 20
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15\e3asignacion>

*/