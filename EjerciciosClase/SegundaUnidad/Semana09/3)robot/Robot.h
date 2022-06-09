#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>

class Robot     //Creamos clase Robot.
{
private:
    std::string name;       //Atributos.
public:
    Robot();        //Constructor.
    ~Robot();       //Destructor.

    void encender_robot();      //Funcion para encender robot.
    void preguntar_name();      //Funcion para preguntar nombre al robot.
    void resetear_robot();      //Funcion para resetear robot.
    void insertar_nombre_robot();       //Funcion para insertar nombre al robot.
};

#endif