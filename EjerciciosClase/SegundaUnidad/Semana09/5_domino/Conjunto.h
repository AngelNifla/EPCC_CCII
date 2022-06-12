#ifndef _CONJUNTO_H_
#define _CONJUNTO_H_

#include "Ficha.h"      //Se incluye codigo del archivo especificado.

#include <vector>       //Se incluye la libreria especificada.

class Conjunto          //Clase Conjunto.
{
private:
    int size;           //Atriuto: para el tamaño del conjunto.
    std::vector<Ficha*> dominos;            //Atriuto: vector de tipo puntero objeto Ficha para alamcenar los dominos ingresados.
    std::vector<Ficha> ordenamiento;            //Atriuto: vector de tipo objeto Ficha para ordenar los dominos.
public:
    Conjunto(int _size);            //Constructor.
    void llenar_conjunto_fichas();          //Funcion para ingresar y llenar las fichas domino.
    bool contando_cifras();         //Funcion para contar cifras: Si el numero de repeticiones de todos los valore de los dominos es par, se puede ordenar.
    void calculando_ordenamiento();         //Funcion para calcular el ordenamiento de dominos.
    void mostrar_ordenamiento();            //Funcion para mostrar solo el ordenamiento.
    void mostrar_conjunto();            //Funcion para mostrar solo el conjunto inicial.
    ~Conjunto();            //Destructor.
};

#endif