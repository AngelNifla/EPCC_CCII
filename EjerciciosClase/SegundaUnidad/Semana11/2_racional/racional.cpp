/*///////////////////////ENUNCIADO/////////////////////////////
Implemente una clase genérica Racional que represente un número racional,
es decir, un número de la forma x / y donde x e y son números enteros,
con y distinto de cero. La clase debe cumplir los siguientes requisitos:
    -a) Proporcione un constructor que tome dos argumentos correspondientes
        al numerador y denominador. El primer argumento debe ser cero por
        defecto, el segundo argumento debe ser uno por defecto.
    -b) La clase debe proporcionar un constructor copia, operador de asignación.
    -c) Proporcione los operadores de suma, resta, multiplicación y división.
    -d) Proporcione los operadores +=, -=, *= y /=.
    e) Implemente una función double que devuelva la mejor aproximación del
        racional como un doble.
    -f) Implemente el operador de inserción para leer un número racional en
        con el formato como “-15/23”.
    -g) Mantenga el número racional es su forma reducida, es decir, el numerador
        y el denominador son coprimos.
*/

/*///////////////////////CODIGO/////////////////////////////*/
#include "Racional.h"       //Se incluye codigo del archivo especificado.

int main()
{
    Racional<int> R1(-15,4);        //Creando objeto por parametro.
    std::cout<<"Racional R1: "<<R1;         //Sobrecarga de <<.
    std::cout<<"Racional R1 redondeo: "<<R1.Double()<<"\n";     //Funcion de aproximacion.
    Racional<int> R2;       //Creando objeto por defecto..
    std::cout<<"Racional R2: "<<R2;
    R2 = R1;        //Sobrecarga de =.
    std::cout<<"Racional R2 = R1: "<<R2;            //Sobrecarga de <<.
    Racional<int> R3(R2);           //Creando objeto por copia.
    std::cout<<"Racional R3(R2): "<<R3;         //Sobrecarga de <<.
    R3 = R1+R2;     //Sobrecarga de +.
    std::cout<<"Racional R3=R1+R2: "<<R3;           //Sobrecarga de <<.
    R3 /= R1;       //Sobrecarga de /=.
    std::cout<<"Racional R3/=R1: "<<R3;         //Sobrecarga de <<.
    R3 += R1;       //Sobrecarga de +=
    std::cout<<"Racional R3+=R1: "<<R3;         //Sobrecarga de <<.
    std::cout<<"Racional R1 redondeo: "<<R3.Double()<<"\n";     //Funcion de aproximacion.
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\2_racional> .\\a
Racional R1: -15/4      
Racional R1 redondeo: -4
Racional R2: 0/1        
Racional R2 = R1: -15/4 
Racional R3(R2): -15/4  
Racional R3=R1+R2: -15/2
Racional R3/=R1: -2/-1
Racional R3+=R1: 7/-4
Racional R1 redondeo: -2
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana11\2_racional>

*/