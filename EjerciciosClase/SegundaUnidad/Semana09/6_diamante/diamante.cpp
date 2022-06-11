/*////////////////////////////////////ENUNCIADO////////////////////////////////////
El programa diamante toma como entrada una letra y la muestra en forma
de diamante. Dada una letra, imprime un diamante que comienza con 'A',
con la letra proporcionada en el punto más ancho.
Requisitos
    * La primera fila contiene una 'A'.
    * La última fila contiene una 'A'.
    * Todas las filas, excepto la primera y la última, tienen exactamente dos
        letras idénticas.
    * Todas las filas tienen tantos espacios finales como espacios iniciales. (Esto
        podría ser 0).
    * El diamante es simétrico horizontalmente.
    * El diamante es verticalmente simétrico.
    * El diamante tiene una forma cuadrada (el ancho es igual a la altura).
    * Las letras forman una forma de diamante.
    * La mitad superior tiene las letras en orden ascendente.
    * La mitad inferior tiene las letras en orden descendente.
    * Las cuatro esquinas (que contienen los espacios) son triángulos.
En los ejemplos, los espacios se indican mediante ·.
Diamante para la letra 'A':
A
Diamante para la letra 'C':
··A··
·B·B·
C···C
·B·B·
··A··
Diamante para la letra 'E':
····A····
···B·B···
··C···C··
·D·····D·
E·······E
·D·····D·
··C···C··
···B·B···
····A····
Utilice la cabecera <sstream> para crear el diamante, luego utilice una
función adicional para mostrar el diamante.
*/


/*///////////////////////////////////CODIGO///////////////////////////////////*/

#include "Diamante.h"       //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    char caracter{};        //Variable para el caracter de rango.

    std::cout<<"Ingrese un carcater en mayuscula para formar el diamante: ";
    std::cin>>caracter;

    std::cout<<"-----------------------------------------------------------\n";
    Diamante D(caracter);       //Se crea el diamante.
    std::cout<<"-> Se creo el diamante con rango hasta "<<caracter<<".\n";
    std::cout<<"-----------------------------------------------------------\n";
    std::cout<<"-> Mostrando el diamante.\n\n";
    D.mostrar_diamante();       //Se muetsra el diamante.
    
    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\diamante> g++ diamante.cpp Diamante_h.cpp
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\diamante> .\\a

Ingrese un carcater en mayuscula para formar el diamante: M
-----------------------------------------------------------
-> Se creo el diamante con rango hasta M.
-----------------------------------------------------------
-> Mostrando el diamante.

 * * * * * * * * * * * * A * * * * * * * * * * * *
 * * * * * * * * * * * B * B * * * * * * * * * * *
 * * * * * * * * * * C * * * C * * * * * * * * * *
 * * * * * * * * * D * * * * * D * * * * * * * * *
 * * * * * * * * E * * * * * * * E * * * * * * * *
 * * * * * * * F * * * * * * * * * F * * * * * * *
 * * * * * * G * * * * * * * * * * * G * * * * * *
 * * * * * H * * * * * * * * * * * * * H * * * * *
 * * * * I * * * * * * * * * * * * * * * I * * * *
 * * * J * * * * * * * * * * * * * * * * * J * * *
 * * K * * * * * * * * * * * * * * * * * * * K * *
 * L * * * * * * * * * * * * * * * * * * * * * L *
 M * * * * * * * * * * * * * * * * * * * * * * * M
 * L * * * * * * * * * * * * * * * * * * * * * L *
 * * K * * * * * * * * * * * * * * * * * * * K * *
 * * * J * * * * * * * * * * * * * * * * * J * * *
 * * * * I * * * * * * * * * * * * * * * I * * * *
 * * * * * H * * * * * * * * * * * * * H * * * * *
 * * * * * * G * * * * * * * * * * * G * * * * * *
 * * * * * * * F * * * * * * * * * F * * * * * * *
 * * * * * * * * E * * * * * * * E * * * * * * * *
 * * * * * * * * * D * * * * * D * * * * * * * * *
 * * * * * * * * * * C * * * C * * * * * * * * * *
 * * * * * * * * * * * B * B * * * * * * * * * * *
 * * * * * * * * * * * * A * * * * * * * * * * * *

*/