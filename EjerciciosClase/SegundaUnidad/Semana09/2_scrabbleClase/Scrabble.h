#ifndef _SCRABBLE_H_
#define _SCRABBLE_H_

#include "Ficha.h"      //Incluimos codigo del archivo especificado.

#include <vector>       //Incluimos la libreria especificada.
#include <random>       //Inclusion de la libreria random.
#include <chrono>       //Inclusion de la libreria chrono, para que el numero aleatorio sea diferente en cada ejecucion del programa.


class Scrabble          //Clase Scrabble.
{
private:
    std::string name;           //Atributo: para el nombre.
    std::vector<Ficha*> coleccion;          //Atributo: vector de punteros de tipo objeto Ficha.
public:
    Scrabble(std::string _name);            //Constructor.
    void generando_fichas_aleatorias();         //Funcion para obtener las fichas de forma aleatoria.
    void imprimir(Ficha _ficha);            //Funcion para imprimir una sola ficha.
    void mostrar_scrabble();            //Funcion para mostrar o imprimir todos los datos de un Scrabble.
    ~Scrabble();            //Destructor.
};
#endif