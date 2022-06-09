#ifndef _TABLERO_H_
#define _TABLERO_H_

#include <iostream>         //Se incluye la libreria.
#include <vector>           //Se incluye la libreria.
#include "Reina.h"      //Se incluye codigo del archivo especificado.

class Tablero           //Clase Tablero.
{
private:
    std::string nombre;         //Atributo: para el nombre.
    std::vector<std::vector<char>> matriz;          //Atributo: para la matriz.
    Reina *R1,*R2;          //Atributo: para las pieras de objeto reina.
public:
    Tablero(std::string nombre);            //Constructor.
    void agregar_piezas();              //Funcion para agregar piezas de objeto reina a los punteros.
    bool verificar_ataque();                //Funcion para verificar si existe ataque entre las piezas.
    void mostrar_tablero();             //Funcion para mostrar el tablero.
    void cambiar_posicion_fichas();             //Funcion para cambiar posicion de las piezas.
    void pueden_atacarce();             //Funcion para imprime si el ataque existe.
    ~Tablero();         //Destructor.

    std::string get_nombre()            //Funcion get que retorna el nombre.
    {
        return nombre;
    }
};

#endif