/*///////////////////////ENUNCIADO/////////////////////////////
Escribe una clase genérica para polinomios que al menos debe contener:
    -a) Un constructor que reciba el grado del polinomio.
    -b) Un array dinámico/vector/lista de tipo T para almacenar los coeficientes.
    -c) Un destructor.
    -d) Un operador de salida para ostream.
    -e) Operadores sobrecargados para operaciones aritméticas entre polinomios.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include "Polinomio.h"      //Se incluye codigo del archivo especificado.

int main()
{
    Polinomio<int> P1(4),P2(3);     //Se crea dos polinomios.
    std::cout<<"Mostrando P1: \t"<<P1;          //Se muestran los polinomios.
    std::cout<<"Mostrando P2: \t"<<P2;          //Se muestran los polinomios.
    P1 += P2;           //Se sobrecarga el operadorn +=.
    std::cout<<"Mostrando (P1 += P2)  P1: \t"<<P1;          //Se muestran los polinomios.
    P2 -= P1;           //Se sobrecarga el operadorn -=.
    std::cout<<"Mostrando (P2 -= P1)  P2: \t"<<P2;          //Se muestran los polinomios.
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\8_polinomio> .\\a
Ingresando coeficientes:
        Ingrese el coeficiente 4 : 8
        Ingrese el coeficiente 3 : 0
        Ingrese el coeficiente 2 : 5
        Ingrese el coeficiente 1 : 6
        Ingrese el coeficiente 0 : 3
Ingresando coeficientes:
        Ingrese el coeficiente 3 : 5
        Ingrese el coeficiente 2 : 4
        Ingrese el coeficiente 1 : 8
        Ingrese el coeficiente 0 : 9
Mostrando P1:   P(x) = (8)x^4 + (0)x^3 + (5)x^2 + (6)x^1 + (3)
Mostrando P2:   P(x) = (5)x^3 + (4)x^2 + (8)x^1 + (9)
Mostrando (P1 += P2)  P1:       P(x) = (8)x^4 + (5)x^3 + (9)x^2 + (14)x^1 + (12)
Mostrando (P2 -= P1)  P2:       P(x) = (8)x^4 + (0)x^3 + (-5)x^2 + (-6)x^1 + (-3)
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\8_polinomio>

*/