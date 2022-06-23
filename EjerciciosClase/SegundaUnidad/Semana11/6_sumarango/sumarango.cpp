/*///////////////////////ENUNCIADO/////////////////////////////
Escriba una función template que tome un único parámetro de tipo T y
que acepte cuatro argumentos: un array de tipo T, un índice de inicio,
un índice de finalización (inclusivo) y un valor inicial opcional.
La función debe devolver la suma de todos los elementos del array
en el rango especificado y el valor inicial.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include <iostream>     //Se incluye la libreria especificada.
#include <vector>       //Se incluye la libreria especificada.

template<typename T>        //Template.
T funcion(std::vector<T> &V,int _inicio, int _final, T _valor)      //Funcion que devuelve la suma.
{
    T suma{_valor};
    for (int i = _inicio-1; i < _final; i++)
    {
        suma += V[i];
    }
    return suma;
}

template<typename T>        //Template.
void mostrar(std::vector<T> &V)     //Funcion para mostrar el vector.
{
    std::cout<<"\nMostrando Array:\n";
    for (int i = 0; i < V.size(); i++)
    {
        std::cout<<V[i]<<" ";
    }
    std::cout<<"\n";
}

int main()      //Funcion principal.
{
    //std::vector<int> Vector;          //Se crea el vector.
    std::vector<double> Vector;         //Se crea el vector.
    int num{};      //Variables.
    int inicio{},fin{};     //Variables.
    //int valor{};      //Variables.
    double valor{};     //Variables.
    std::cout<<"Ingrese el numero de datos a ingresar: ";
    std::cin>>num;
    for (int i = 0; i < num; i++)           //Se ingresa valores al array.
    {
        std::cout<<"Ingrese Valor "<<i+1<<": ";
        std::cin>>valor;
        Vector.push_back(valor);
    }
    mostrar(Vector);
    std::cout<<"Establezca el rango:\n";
    std::cout<<"Inicio: ";
    std::cin>>inicio;       //Se ingresa el rango.
    std::cout<<"Fin: ";
    std::cin>>fin;      //Se ingresa el rango.
    std::cout<<"Ingrese valor Inicial: ";
    std::cin>>valor;        //Se ingresa el valor inicial.
    std::cout<<"->La suma en el rango especificado y el valor inicial es : "<<funcion(Vector,inicio,fin,valor);     //Se muestra el resultado llamando a la funcion.
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\6_sumarango> .\\a
Ingrese el numero de datos a ingresar: 7
Ingrese Valor 1: 9
Ingrese Valor 2: 8
Ingrese Valor 3: 6
Ingrese Valor 4: 5
Ingrese Valor 5: 4
Ingrese Valor 6: 8
Ingrese Valor 7: 2

Mostrando Array:
9 8 6 5 4 8 2
Establezca el rango:
Inicio: 2
Fin: 5
Ingrese valor Inicial: 2
->La suma en el rango especificado y el valor inicial es : 25

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\6_sumarango> .\\a
Ingrese el numero de datos a ingresar: 7
Ingrese Valor 1: 2.0
Ingrese Valor 2: 2.6
Ingrese Valor 3: 5.9
Ingrese Valor 4: 4.9
Ingrese Valor 5: 5.7
Ingrese Valor 6: 3.45
Ingrese Valor 7: 2.8

Mostrando Array:
2 2.6 5.9 4.9 5.7 3.45 2.8
Establezca el rango:
Inicio: 2
Fin: 4
Ingrese valor Inicial: 2.0
->La suma en el rango especificado y el valor inicial es : 15.4
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\6_sumarango>
*/