/*////////////////////////////////////ENUNCIADO////////////////////////////////////

En el juego de Scrabble, cada ficha contiene una letra, que se usa para formar
palabras en filas y columnas, y una puntuación, que se usa para determinar el
valor de las palabras.
1. Escriba una definición para una clase llamada Ficha que represente fichas
de Scrabble. Los atributos de la clase Ficha deben incluir un caracter llamado
letra y un entero llamado valor.
2. Escriba un constructor que tome parámetros llamados letra y valor e
inicialice las variables de los atributos.
3. Escriba un método llamado imprimir que tome un objeto Ficha como
parámetro y muestre los atributos en un formato fácil de leer.
4. Escriba una definición para una clase llamada Scrabble que represente un
jugador de scrabble. Los atributos de la clase deben incluir un nombre para
identificar al jugador y una colección de 7 Fichas.
5. Escriba un método en Scrabble que genere las 7 fichas necesarias en forma
aleatoria.
6. Pruebe su clase Scrabble creando jugadores de scrabble (de 2 a 4) y los
muestre en pantalla.
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/

#include "Scrabble.h"           //Incluimos codigo del archivo especificado.

int main()              //Funcion principal.
{
    int num_jugadores{0};      //Variable:para el numero de jugadores.
    std::string name{};     //Variable:para los nombres.
    std::vector<Scrabble*> jugadores;       //Vector de jugadores.

    std::cout<<"Cuantos jugadores va a crear?: ";
    std::cin>>num_jugadores;            //Se agrega el numero de jugadores.
    while (num_jugadores<0 || num_jugadores>4)          //El numero de jugadores tiene que ser entre [1,4].
    {
        std::cout<<"->[error][maximo 1 a 4 jugadores]";
        std::cin>>num_jugadores;
    }

    for (int i = 0; i < num_jugadores; i++)     //Se crean los Scrabbles tantas veces como el numero de jugadores. 
    {
        std::cout<<"Ingrese nombre del jugador "<<i+1<<": ";
        std::cin>>name;

        Scrabble *jugador;
        jugador = new Scrabble(name);
        jugadores.push_back(jugador);
    }
    std::cout<<"-> Jugadores creados.\n";
    std::cout<<"-------------------------------------\n";

    std::cout<<"MOSTRANDO JUGADORES:\n";            //Se muestra las fichas de casa Scrabble.
    for (int i = 0; i < jugadores.size(); i++)
    {
        (*(jugadores[i])).mostrar_scrabble();
        std::cout<<"-------------------------------------\n";
    }

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\SegundaUnidad\Semana09\2_scrabbleClase> .\\a
Cuantos jugadores va a crear?: 2
Ingrese nombre del jugador 1: yo
Ingrese nombre del jugador 2: tu
-> Jugadores creados.
-------------------------------------
MOSTRANDO JUGADORES:

Scrabble :yo
Fichas:
        ->Ficha 1 :
                Ficha: V
                Valor: 3
        ->Ficha 2 :
                Ficha: U
                Valor: 1
        ->Ficha 3 :
                Ficha: O
                Valor: 1
        ->Ficha 4 :
                Ficha: K
                Valor: 5
        ->Ficha 5 :
                Ficha: C
                Valor: 3
        ->Ficha 6 :
                Ficha: F
                Valor: 3
        ->Ficha 7 :
                Ficha: U
                Valor: 1
-------------------------------------

Scrabble :tu
Fichas:
        ->Ficha 1 :
                Ficha: F
                Valor: 3
        ->Ficha 2 :
                Ficha: S
                Valor: 1
        ->Ficha 3 :
                Ficha: W
                Valor: 3
        ->Ficha 4 :
                Ficha: X
                Valor: 8
        ->Ficha 5 :
                Ficha: A
                Valor: 1
        ->Ficha 6 :
                Ficha: I
                Valor: 1
        ->Ficha 7 :
                Ficha: _
                Valor: 0
-------------------------------------

*/