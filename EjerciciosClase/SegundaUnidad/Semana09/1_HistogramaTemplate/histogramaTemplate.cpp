/*////////////////////////////////////ENUNCIADO////////////////////////////////////
Escriba una clase usando templates que tome una colección de elementos
como parámetro. La clase debe tener un método que devuelva el histograma
de los elementos de la colección. El método histograma debe aceptar un
parámetro que indique en cuantos intervalos agrupar a los elementos de la
colección. La clase debe tener además un método para imprimir el
histograma. Ejemplo: Dada la colección de enteros {10, 2, 9, 7, 5, 6, 1, 8, 8, 4}
y con el número de intervalos igual a 5, el histograma debe retornar 2 1 2 3 2
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/

#include "Coleccion.h"      //Se incluye codigo del archivo especificado.       //Se cera un vector en el puntero.

int main()
{
    int size{},intervalos{},dato{};         //Variables.

    std::cout<<"Ingrese el size de la lista: ";
    std::cin>>size;           ///Se ingresa valores.
    std::cout<<"Ingrese el numero de intervalos: ";
    std::cin>>intervalos;           ///Se ingresa valores.

    std::vector<int> *coleccion;
    coleccion = new std::vector<int>;       //Se crea un vector en el puntero.

    //*coleccion = {10, 2, 9, 7, 5, 6, 1, 8, 8, 4};         ////////Valores de prueba.//////////////
    //*coleccion = {5,4,8,9,10,12,5,7};       ////////Valores de prueba.//////////////
    //std::vector<double> *coleccion;           ////////Valores de prueba.//////////////
    //coleccion = new std::vector<double>;          ////////Valores de prueba.//////////////
    //*coleccion = {10.5, 2.3, 9.4, 7.84, 54, 6.4, 1.8, 8.5, 8.7, 4.0};   ////////Valores de prueba.//////////////

    for (int i = 0; i < size; i++)          //Se ingresa los valores al vector.
    {
        std::cout<<"Ingrese dato: ";
        std::cin>>dato;
        (*coleccion).push_back(dato);
    }

    Coleccion<int> C(*coleccion);       //Se crea un objeto de tipo coleccion y se envia el vector.

    //Coleccion<double> C(*coleccion);          ////////Valores de prueba.//////////////

    C.Histograma(intervalos);           //Se pide hallar su histograma.
    C.mostrar_histograma();         //Se pide mostrar el histograma.

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////


PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate> .\\a
Ingrese el numero de intervalos: 5
2 1 2 3 2
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate> .\\a
Ingrese el numero de intervalos: 4
2 3 4 1 
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate> .\\a
Ingrese el numero de intervalos: 3

        -> No se puede obtener ese numero de intervalos.
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate> .\\a
Ingrese el numero de intervalos: 2
4 6
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate> .\\a
Ingrese el numero de intervalos: 1
10 
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\1_HistogramaTemplate>

*/