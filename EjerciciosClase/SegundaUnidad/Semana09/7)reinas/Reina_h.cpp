#include "Reina.h"      //Se incluye codigo del archivo especificado.

Reina::Reina()              //Constructor.
{
    std::cout<<"\tIngresar nombre de la Reina: ";
    std::cin>>nombre;           //Se agrega el nombre.
    this->agregar_posicion();       //Se llama la funcion para agregar posiciones.
}

void Reina::agregar_posicion()              //Funcion para agregar las posiciones.
{
    int aux{};
    std::cout<<"\tIngresar posicion de fila: ";
    std::cin>>aux;
    while (aux<1 || aux>8)
    {
        std::cout<<"\tIngresar una posicion de fila correcta: ";
        std::cin>>aux;
    }
    posicion_f=aux;         //Se agrega el dato.
    std::cout<<"\tIngresar posicion de columna: ";
    std::cin>>aux;
    while (aux<1 || aux>8)
    {
        std::cout<<"\tIngresar una posicion de columna correcta: ";
        std::cin>>aux;
    }
    posicion_c=aux;         //Se agrega el dato.
}

Reina::~Reina()             //Destructor.
{
}