/*///////////////////////ENUNCIADO/////////////////////////////
Escriba una función genérica to_string que tome un argumento de
cualquier tipo (como const&) y genere un string usando un std::stringstream
y devuelva el string resultante. La función to_string debe funcionar tanto
para tipos intrínsecos como para contenedores.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include <iostream>     //Se incluyeb la libreria especificada.
#include <sstream>      //Se incluyeb la libreria especificada.
#include <vector>       //Se incluyeb la libreria especificada.
#include <list>     //Se incluyeb la libreria especificada.

template<typename T>
std::string to_string(const T &dato)        //Funcion de sstream.
{
    std::string cadena;
    std::stringstream NEW;
    NEW<<dato<<"\n";
    cadena = NEW.str();
    return cadena;
}

int main()      //Funcion principal.
{
    int I{52};          //Construyento tipo de dato.
    std::cout<<to_string(I);
    char C{'A'};            //Construyento tipo de dato.
    std::cout<<to_string(C);
    float F{52.45};         //Construyento tipo de dato.
    std::cout<<to_string(F);
    std::string S{"Hola"};          //Construyento tipo de dato.
    std::cout<<to_string(S);
    std::vector<int> vector = {1,2,3};      //Costruyendo objeto.
    std::cout<<to_string(vector[0]);
    std::list<double> lista = {12.5,14.3,05.78};        //Costruyendo objeto.
    std::cout<<to_string(lista.front());
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\7_tostring> .\\a
52
A
52.45
Hola
1
12.5
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\7_tostring>

*/