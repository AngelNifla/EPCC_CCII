#ifndef _REINA_H_
#define _REINA_H_

#include <iostream>     //Se incluye la libreria.

class Reina     //Clase Reina.
{
private:
    int posicion_f;         //Atributo: para la posicion de fila. 
    int posicion_c;         //Atributo: para la posicion de columna.
    char nombre;            //Atributo: para el nombre.
public:
    Reina();            //Constructor.
    void agregar_posicion();        //Funcion para agregar las posiciones.
    ~Reina();           //Destructor.

    int get_posicion_c()        //Funcion get, que devuelve la posicion columna.
    {
        return posicion_c;
    }
    int get_posicion_f()        //Funcion get, que devuelve la posicion fila.
    {
        return posicion_f;
    }
    char get_nombre()       //Funcion get, que devuelve el nombre.
    {
        return nombre;
    }
};

#endif