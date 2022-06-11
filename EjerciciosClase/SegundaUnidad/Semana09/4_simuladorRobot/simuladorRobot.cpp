/*////////////////////////////////////ENUNCIADO////////////////////////////////////

Escribir un simulador de robot.
Una fábrica de robots necesita un programa para verificar los movimientos
de sus robots.
Los robots tienen tres posibles movimientos:
    * (D) Girar a la derecha.
    * (I) Girar a la izquierda.
    * (A) Avanzar una posición.
Los robots se colocan en un plano cartesiano infinito (hipotético), mirando en
una dirección particular (norte, este, sur u oeste) en un punto {x, y}.
Luego, el robot recibe una serie de instrucciones
La cadena de letras "DAAIAI" significa:
    * Gire a la derecha.
    * Avanzar dos veces.
    * Gire a la izquierda.
    * Avanzar una vez.
    * Gire a la izquierda una vez más.
Digamos que un robot comienza en {7, 3} mirando hacia el norte. Luego de
ejecutar este flujo de instrucciones debería dejarlo en {9, 4} mirando al oeste.
Cree una clase robot con los atributos y métodos adecuados.
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/


#include "Robot.h"      //Se incluye codigo del archivo especificado.

#include <string>

void error()            //Funcion que devuelve error, si la instruccion esta mal.
{
    std::cout<<"-> Error:[instruccion incorrecta]\n";
}

void simulacion(Robot _R,std::string _instruccion)      //Funcion que realiza llama alos pasos de la simulacion.
{
    for (int i = 0; i < _instruccion.size(); i++)
    {
        if (_instruccion[i]=='A')           //Si se lee la instruccion 'A'.
        {
            _R.avanzar();           //Se llama al funcion avanzar del objeto.
        }else if (_instruccion[i]=='D')         //Si se lee la instruccion 'D'.
        {
            _R.girar('D');          //Se llama al funcion girar del objeto.
        }else if (_instruccion[i]=='I')         //Si se lee la instruccion 'I'.
        {
            _R.girar('I');          //Se llama al funcion girar del objeto.
        }else           //Si se lee otra instruccion.
        {
            error();        //Manda error.
            exit(-1);       //Y termina el programa.
        }  
    }
    _R.mostrar_posicion();              //Al final se muestra la nueva posicion del objeto.

}

int main()          //Funcion principal.
{
    int posicion_x,posicion_y;
    char direccion;

    std::cout<<"Ingrese coordenada x: ";
    std::cin>>posicion_x;           //Se ingresan los datos.
    std::cout<<"Ingrese coordenada y: ";
    std::cin>>posicion_y;           //Se ingresan los datos.
    std::cout<<"Ingrese direccion W(norte),Y(sur),X(este),Y(oeste): ";
    std::cin>>direccion;            //Se ingresan los datos.
    while (direccion!=87 && direccion!=88 &&direccion!=89 &&direccion!=90)          //Si se ingresa otro valor a la direccion.
    {
        std::cout<<"\tIngrese CORRECTAMENTE la direccion W(norte),Y(sur),X(este),Y(oeste): ";
        std::cin>>direccion;        //Seguira pidiendo uno correcto.
    }
    
    
    Robot R(posicion_x,posicion_y,direccion);       //Se crea el objeto con los datos obtenidos.

    std::string instruccion{};
    std::cout<<"Instruccion:\n";
    std::cout<<"\tA(avanzar)\n";
    std::cout<<"\tI(girar izquierda)\n";
    std::cout<<"\tD(girar derecha)\n";
    std::cout<<"Ingrese su instruccion: ";
    std::cin>>instruccion;          //Se ingresa la instruccion.

    simulacion(R,instruccion);      //Se llama a la funcion simulacion.

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\simuladorRobot> .\\a
Ingrese coordenada x: 7
Ingrese coordenada y: 3
Ingrese direccion W(norte),Y(sur),X(este),Y(oeste): W
Instruccion:
        A(avanzar)        
        I(girar izquierda)
        D(girar derecha)  
Ingrese su instruccion: DAAIAI
-----------------------------------------------------
El robot se encuentra en la coordenada (9,4) en direccion al Oeste

*/