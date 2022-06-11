#ifndef _DIAMANTE_H_
#define _DIAMANTE_H_

#include <iostream>     //Se incluye la libreria especificada.
#include <sstream>      //Se incluye la libreria especificada.

class Diamante
{
private:
    int size;       //Atributo: tamaño en forma de matriz -> si es 'B' sera 3*3 y size = 3
    char caracter;      //Atributo: carcater limite para el diamante -> si es 'D' sera de A...D
    std::string cadena;     //Atributo: cadena donde se ingresara el diamante.
public:
    Diamante(char _size);       //Constructor.
    void elaborar_diamante();       //Funcion para elaborar el diamante.
    void mostrar_diamante();        //Funcion para mostrar el diamante.
    ~Diamante();        //Destructor.
};

#endif