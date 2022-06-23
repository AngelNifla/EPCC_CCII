/*///////////////////////ENUNCIADO/////////////////////////////
Escriba una implementación de pila para un tipo genérico.
Se debe definir el tamaño máximo de la pila. Proporcione las siguientes funciones:
    -a) Constructor
    -b) Destructor si es necesario
    -c) top: muestra el último elemento
    -d) pop: retorna el último elemento y lo elimina de la pila
    -e) push: inserta un nuevo elemento
    -f) clear: borra todos los elementos
    -g) size: número de elementos
    -h) full: comprueba si la pila está llena, y
    -i) empty: comprueba si la pila está vacía.
Se debe generar una excepción cuando la pila esté llena y se quiera colocar
un nuevo elemento, y también cuando la pila esté vacía y se quiera obtener un elemento.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include "Pila.h"

int main()
{
    Pila<double> P1(3);     //Creando una pila con un tamaño definido.
    P1.mostrar_Pila();      //Mostrando la pila.
    std::cout<<"Mostrando y eliminando el ultimo elemento.\n";
    P1.top();       //Mostrando y eliminando el ultimo elemnto de la pila.
    std::cout<<std::endl;
    P1.mostrar_Pila();            //Mostrando la pila.
    P1.push(15.2);          //Ingresando un valor a la pila.
    P1.pop();
    P1.mostrar_Pila();            //Mostrando la pila.
    std::cout<<"El size actual es : "<<P1.Size()<<"\n";         //Mostrando el tamaño
    P1.push(15.2);          //Ingresando un valor a la pila.
    P1.mostrar_Pila();            //Mostrando la pila.
    if (P1.full())          //Verificadno si la pila esta llena.
    {
        std::cout<<"-> La pila esta llena\n";
    }else
    {
        std::cout<<"-> La pila no esta llena\n";
    }
    if (P1.empty())         //Verificadno si la pila esta vacia.
    {
        std::cout<<"-> La pila esta vacia\n";
    }else
    {
        std::cout<<"-> La pila no esta vacia\n";
    }
    std::cout<<"Eliminado los datos de la pila\n";
    P1.clear();         //Eliminando toda la pila.
    P1.mostrar_Pila();            //Mostrando la pila.
    std::cout<<"El size actual es : "<<P1.Size()<<"\n";     //Mostrando el tamaño
    
    
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\4_pila> .\\a
Ingrese valor 1: 15.8
Ingrese valor 2: 16.9
Ingrese valor 3: 10.6

15.8-> 16.9-> 10.6-> vacio(FIN)

Mostrando y eliminando el ultimo elemento.
10.6->

15.8-> 16.9-> 10.6-> vacio(FIN)

-> La pila esta llena.
15.8-> 16.9-> vacio(FIN)

El size actual es : 2

15.8-> 16.9-> 15.2-> vacio(FIN)
-> La pila esta llena
-> La pila no esta vacia

Eliminado los datos de la pila
-> La pila esta vacia.
El size actual es : 0
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\4_pila>

*/