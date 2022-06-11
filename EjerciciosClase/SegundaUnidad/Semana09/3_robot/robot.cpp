/*////////////////////////////////////ENUNCIADO////////////////////////////////////

Usted administra una fábrica de robots.
Cuando un robot sale de la fábrica, no tiene nombre.
-   La primera vez que enciende un robot, se genera un nombre aleatorio en
    formato de dos letras mayúsculas seguidas de tres dígitos, como RZ123 o
    CD731.
-   Cuando necesitamos resetear un robot a su configuración de fábrica, su
    nombre se borra. De modo que la próxima vez que se le pregunte su nombre,
    ese robot responderá con un nuevo nombre aleatorio.
-   Los nombres de los robot deben ser aleatorios: no deben seguir una
    secuencia predecible. El uso de nombres aleatorios implica un riesgo de
    colisiones. Su solución debe garantizar que cada robot existente tenga un
    nombre único.
Use la cabecera <random>
Pruebe su solución generando 100 robots, luego en un ciclo resetee sus
nombres y asigne nuevos nombre, compruebe que sus nombres siguen
siendo únicos.
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/

#include "Robot.h"      //Incluimos codigo del archivo especificado.
#include <vector>       //Incluimos la libreria especificada.

int main()          //Funcipon principal.
{
    std:: vector<Robot> Robots;         //Creamos un vector de tipo Robot.
    int num_robots{};

    std::cout<<"Ingrese numero de robots que desea crear: ";
    std::cin>>num_robots;               //Ingresamos el tamaño o numero de robots.
    
    std::cout<<"----------------------------------------------------\n";
    std::cout<<"-> Creando "<<num_robots<<" Robots.\n";
    for (int i = 0; i < num_robots; i++)                //Con un bucle creamos los robots.
    {
        Robots.push_back(Robot{});
        std::cout<<"Robot "<<i+1<<" creado con ";
        Robots[i].preguntar_name();     //Preguntamos su nombre al robot.
    }

    std::cout<<"----------------------------------------------------\n";
    std::cout<<"-> Encendiendo Robots.\n";
    for (int i = 0; i < num_robots; i++)                //Con un bucle encendemos los robots.
    {
        Robots[i].encender_robot();
        std::cout<<"Robot "<<i+1<<" encendido con ";
        Robots[i].preguntar_name();     //Preguntamos su nombre al robot.
    }

    std::cout<<"----------------------------------------------------\n";
    std::cout<<"-> Reseteando Robots.\n";
    for (int i = 0; i < num_robots; i++)                //Con un bucle reseteamos los robots.
    {
        Robots[i].resetear_robot();
        std::cout<<"Robot "<<i+1<<" reseteado con nuevo ";
        Robots[i].preguntar_name();     //Preguntamos su nombre al robot.
    }

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\robot> .\\a
Ingrese numero de robots que desea crear: 10
----------------------------------------------------
-> Creando 10 Robots.
Robot 1 creado con nombre: [Sin nombre]
Robot 2 creado con nombre: [Sin nombre]
Robot 3 creado con nombre: [Sin nombre]
Robot 4 creado con nombre: [Sin nombre]
Robot 5 creado con nombre: [Sin nombre]
Robot 6 creado con nombre: [Sin nombre]
Robot 7 creado con nombre: [Sin nombre]
Robot 8 creado con nombre: [Sin nombre]
Robot 9 creado con nombre: [Sin nombre]
Robot 10 creado con nombre: [Sin nombre]
----------------------------------------------------
-> Encendiendo Robots.
Robot 1 encendido con nombre: ED523
Robot 2 encendido con nombre: YZ968
Robot 3 encendido con nombre: MR670
Robot 4 encendido con nombre: FZ148
Robot 5 encendido con nombre: PR071
Robot 6 encendido con nombre: LR204
Robot 7 encendido con nombre: AF062
Robot 8 encendido con nombre: UZ271
Robot 9 encendido con nombre: DD030
Robot 10 encendido con nombre: XG272
----------------------------------------------------
-> Reseteando Robots.
Robot 1 reseteado con nuevo nombre: YL447
Robot 2 reseteado con nuevo nombre: AD125
Robot 3 reseteado con nuevo nombre: EP075
Robot 4 reseteado con nuevo nombre: KQ240
Robot 5 reseteado con nuevo nombre: LZ919
Robot 6 reseteado con nuevo nombre: LZ919
Robot 7 reseteado con nuevo nombre: PC143
Robot 8 reseteado con nuevo nombre: YV427
Robot 9 reseteado con nuevo nombre: FZ581
Robot 10 reseteado con nuevo nombre: XI430

*/