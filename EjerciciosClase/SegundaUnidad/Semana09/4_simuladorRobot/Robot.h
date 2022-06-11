#ifndef _ROBOT_H_
#define _ROBOT_H_

#define N 87        /* Norte es igual a W */            //Se define id.
#define E 88        /* Este es igual a X */         //Se define id.
#define S 89        /* Sur es igual a Y */          //Se define id.
#define O 90        /* Oeste es igual a Z */            //Se define id.

#include <iostream>

class Robot         //Clase robot.
{
private:
    int posicion_x;         //Atributos.
    int posicion_y;         //Atributos.
    int direccion;          //Atributos.
public:
    Robot(int _x, int _y, int _instruccion);        //Constructor.
    ~Robot();       //Desstructor.

    void avanzar();     //Funcion avanzar.
    void girar(int _instruccion);       //Funcion girar.
    void mostrar_posicion();        //Funcion que muestra la posicion.
};

#endif