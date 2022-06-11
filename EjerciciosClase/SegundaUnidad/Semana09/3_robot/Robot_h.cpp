#include "Robot.h"          //Incluimos codigo del archivo especificado.

#include <random>           //Incluimos la libreria especificada.
#include <chrono>           //Incluimos la libreria especificada.
#include <sstream>          //Incluimos la libreria especificada.

Robot::Robot()          //Constructor.
{
    name = "[Sin nombre]";            //Se crea sin nombre
}

void Robot::encender_robot()            //Funcion para encender robot.
{
    insertar_nombre_robot();            //Llamamos a la funcion que inserta un nombre nuevo.

}

void Robot::preguntar_name()            //Funcion para preguntar nombre al robot.
{
    std::cout<<"nombre: "<<name<<std::endl;
}

void Robot::resetear_robot()            //Funcion para resetear robot.
{
    name = "";          //Vaciamos el nombre.
    insertar_nombre_robot();        //Llamamos a la funcion que inserta un nombre nuevo.
}

void Robot::insertar_nombre_robot()         //Funcion para insertar nombre al robot.
{
    auto num_base = std::chrono::system_clock::now().time_since_epoch().count();            //devuelve el punto de tiempo como duración desde el inicio del reloj del systema.
    std::mt19937 generador(num_base);               //utilizamos uno de los Generadores de números aleatorios predefinidos de Random. Y enviamos un numero base para generar otros a partir de ese.
    //default_random_engine generador(num_base);                /*Otro Generador de números aleatorios predefinidos*/
    std::uniform_int_distribution<int>distrib(0,9);         // utilizamos uno de los Distribuciones uniformes de random para producir valores enteros distribuidos uniformemente en un rango.
    std::uniform_int_distribution<char>distrib2('A','Z');           // utilizamos uno de los Distribuciones uniformes de random para producir valores enteros distribuidos uniformemente en un rango.
    
    std::stringstream nombre{};     //Creamos un stringstream.
    //Agregamos los datos aleatorios necesario para el nombre de los robots.
    nombre<<distrib2(generador)<<distrib2(generador)<<distrib(generador)<<distrib(generador)<<distrib(generador);
    name = nombre.str();        //Agreamos el string.
}

Robot::~Robot()     //Destructor.
{
}
