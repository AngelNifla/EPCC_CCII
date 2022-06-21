/*///////////////////////ENUNCIADO/////////////////////////////
Implemente una clase Contador que represente un contador de enteros simple.
La clase debe satisfacer los siguientes requisitos:
    a) Proporcione un constructor que tome un solo argumento int que se use
        para inicializar el valor del contador. El argumento debe ser cero por defecto.
    b) Sobrecarge los operadores de incremento prefijo y de incremento posfijo
        para proporcionar un medio por el cual incrementar el valor del contador.
    c) Proporcione una función miembro valor() que devuelva el valor actual del contador.
    d) Además, la clase debe saber cuántos objetos Contador existen actualmente.
        Proporcione una interfaz para consultar este valor. El código no debe utilizar
        ninguna variable global. Use miembros estáticos.
*/

/*///////////////////////CODIGO/////////////////////////////*/

#include "Contador.h"           //Se incluye el codigo del archivo especificado.
#include <iostream>             //Se incluye la libreria especificado.

int main()
{
    Contador C1{};          //Constrimos un contador por los 3 tipos de constructores.
    std::cout<<"Valor de contador 1 creado por defecto: "<<C1.get_valor()<<"\n";
    std::cout<<"Num de objetos contadores creados: "<<C1.instance_count<<"\n\n";
    Contador C2(5);         //Constrimos un contador por los 3 tipos de constructores.
    std::cout<<"Valor de contador 2 creado por parametro: "<<C2.get_valor()<<"\n";
    std::cout<<"Num de objetos contadores creados: "<<C2.instance_count<<"\n\n";
    Contador C3(C2);            //Constrimos un contador por los 3 tipos de constructores.
    std::cout<<"Valor de contador 3 creado por copia del contador 2: "<<C3.get_valor()<<"\n";
    std::cout<<"Num de objetos contadores creados: "<<C3.instance_count<<"\n\n";
    C3++;           //Usamos la sobrecarga del oprador de incremento.
    std::cout<<"Valor de contador 3 usando el incrementador postfijo: "<<C3.get_valor()<<"\n";
    ++C3;           //Usamos la sobrecarga del oprador de incremento.
    std::cout<<"Valor de contador 3 usando el incrementador prefijo: "<<C3.get_valor()<<"\n\n";
    C1.~Contador();
    std::cout<<"Destruyendo contador 1.\n";
    std::cout<<"Num de objetos contadores creados: "<<C3.instance_count<<"\n";      //Se muestra el numero de objetos creados.
    return 0;
}

/*///////////////////////EJECUCION/////////////////////////////

Valor de contador 1 creado por defecto: 0
Num de objetos contadores creados: 1

Valor de contador 2 creado por parametro: 5
Num de objetos contadores creados: 2

Valor de contador 3 creado por copia del contador 2: 5
Num de objetos contadores creados: 3

Valor de contador 3 usando el incrementador postfijo: 6
Valor de contador 3 usando el incrementador prefijo: 7

Destruyendo contador 1.
Num de objetos contadores creados: 2

*/