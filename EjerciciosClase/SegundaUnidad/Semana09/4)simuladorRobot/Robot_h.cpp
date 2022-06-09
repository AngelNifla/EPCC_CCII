#include "Robot.h"      //Se incluye codigo del archivo especificado.

Robot::Robot(int _x, int _y, int _instruccion)      //Constructor.
{
    posicion_x = _x;
    posicion_y = _y;
    direccion = _instruccion;
}

void Robot::avanzar()       //Funcion avanzar.
{
    if (direccion == N)         //Si la direccion es Norte.
    {
        posicion_y++;
    }else if (direccion == S)           //Si la direccion es Sur.
    {
        posicion_y--;
    }else if (direccion == E)           //Si la direccion es Este.
    {
        posicion_x++;
    }else if (direccion == O)           //Si la direccion es Oeste.
    {
        posicion_x--;
    }  
}

void Robot::girar(int _instruccion)     //Funcion girar.
{
    if (_instruccion == 'D')            //Si se gira a la derecha.
    {
        if (direccion == O)
        {
            direccion = N;
        }else
        {
            direccion++;
        }
    }else           //Si se gira a la izquierda.
    {
        if (direccion == N)
        {
            direccion = O;
        }else
        {
            direccion--;
        }
    }
}

void Robot::mostrar_posicion()      //Funcion que muestra la posicion.
{
    std::string D{};
    if (direccion==N)           //Especificando nombre de direccion.
    {D = "Norte";}
    else if (direccion == E)            //Especificando nombre de direccion.
    {D = "Este";}
    else if (direccion == S)            //Especificando nombre de direccion.
    {D = "Sur";}
    else            //Especificando nombre de direccion.
    {D = "Oeste";}
    
    std::cout<<"-----------------------------------------------------\n";
    std::cout<<"El robot se encuentra en la coordenada ("<<
    posicion_x<<","<<posicion_y<<")"<<" en direccion al "<<D<<std::endl;
}

Robot::~Robot()             //Destructor.
{
}