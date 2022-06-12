/*////////////////////////////////////ENUNCIADO////////////////////////////////////

Haga una cadena de fichas de dominó.
Calcular una manera de ordenar un conjunto de fichas de dominó de tal
manera que formen una cadena de dominó correcta (los puntos en la mitad
de una ficha coinciden con los puntos en la mitad vecina de una ficha
adyacente) y que los puntos en las mitades de las fichas que no tienen un
vecino (la primera y la última ficha) se emparejan entre sí.
Ejemplo, dadas las fichas [2|1], [2|3] y [1|3], las salidas válidas son
[1|2] [2|3] [3|1] o [3|2] [2 |1] [1|3] o [1|3] [3|2] [2|1] etc., donde el primer y el
último número son iguales.
Para las fichas [1|2], [4|1] y [2|3], la cadena resultante no es válida: el primer
y el último número de [4|1] [1|2] [2|3] no son iguales, 4 != 3
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/


#include "Conjunto.h"       //Se incluye codigo del archivo especificado.

int main()          //Funcion principal.
{
    int size{};       //Variable para el numero de dominos que se va a ingresar.
    std::cout<<"Ingrese el numero de dominos a ingresar: ";
    std::cin>>size;         //Se ingresa el valor.
    while (size<1)          //El valor tiene que se positivo.
    {
        std::cout<<"->[error][numero incorrecto] ";
        std::cin>>size;
    }

    Conjunto C(size);           //Se crea el conjunto de dominos.
    C.mostrar_conjunto();       //Se muestra el conjunto creado.
    C.calculando_ordenamiento();        //Se calcula si se puede ordenar.
    C.mostrar_ordenamiento();           //Se muestra el conjunto ordenado.

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino> .\\a
Ingrese el numero de dominos a ingresar: 7
Ingrese datos a la ficha 1:
        Primer Valor:1
        Segundo Valor:2
Ingrese datos a la ficha 2:
        Primer Valor:3
        Segundo Valor:2
Ingrese datos a la ficha 3:
        Primer Valor:2
        Segundo Valor:3
Ingrese datos a la ficha 4:
        Primer Valor:5
        Segundo Valor:4
Ingrese datos a la ficha 5:
        Primer Valor:3
        Segundo Valor:4
Ingrese datos a la ficha 6:
        Primer Valor:5
        Segundo Valor:1
Ingrese datos a la ficha 7:
        Primer Valor:2
        Segundo Valor:3
-> Conjunto creado.
---------------------------------------------------
Mostrando el conjunto de dominos ingresado:
        -> [1|2] [3|2] [2|3] [5|4] [3|4] [5|1] [2|3]
-> Si se puede ordenar el conjunto de dominos.

---------------------------------------------------
Uno de los ordenamientos de dominos es el siguiente:
        -> [1|2] [2|3] [3|2] [2|3] [3|4] [4|5] [5|1]
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino> .\\a
Ingrese el numero de dominos a ingresar: 3
Ingrese datos a la ficha 1:
        Primer Valor:2
        Segundo Valor:1
Ingrese datos a la ficha 2:
        Primer Valor:2
        Segundo Valor:3
        Primer Valor:1
        Segundo Valor:3
-> Conjunto creado.

---------------------------------------------------
Mostrando el conjunto de dominos ingresado:
        -> [2|1] [2|3] [1|3]
-> Si se puede ordenar el conjunto de dominos.

---------------------------------------------------
Uno de los ordenamientos de dominos es el siguiente:
        -> [2|1] [1|3] [3|2]
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino> .\\a
Ingrese el numero de dominos a ingresar: 3
        Primer Valor:1
        Segundo Valor:2
Ingrese datos a la ficha 2:
        Primer Valor:4
        Segundo Valor:1
Ingrese datos a la ficha 3:
        Primer Valor:2
        Segundo Valor:3
-> Conjunto creado.

---------------------------------------------------
Mostrando el conjunto de dominos ingresado:
        -> [1|2] [4|1] [2|3]
-> No se puede ordenar el conjunto de dominos.
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino> .\\a
Ingrese el numero de dominos a ingresar: 1
Ingrese datos a la ficha 1:
        Primer Valor:1
        Segundo Valor:1
-> Conjunto creado.

---------------------------------------------------
Mostrando el conjunto de dominos ingresado:
        -> [1|1]
-> Si se puede ordenar el conjunto de dominos.

---------------------------------------------------
Uno de los ordenamientos de dominos es el siguiente:
        -> [1|1]
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino> .\\a
Ingrese el numero de dominos a ingresar: 2
Ingrese datos a la ficha 1:
        Primer Valor:1
        Segundo Valor:3
Ingrese datos a la ficha 2:
        Primer Valor:4
        Segundo Valor:3
-> Conjunto creado.

---------------------------------------------------
Mostrando el conjunto de dominos ingresado:
        -> [1|3] [4|3]
-> No se puede ordenar el conjunto de dominos.
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\5_domino>

*/