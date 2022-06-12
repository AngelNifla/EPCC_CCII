#include "Ficha.h"      //Se incluye codigo del archivo especificado.

Ficha::Ficha(int _val1, int _val2)      //Constructor.
{
    valor1 = _val1;
    valor2 = _val2;
}

void Ficha::imprimir()      //Funcion que imprime los valores de la ficha.
{
    std::cout<<"["<<valor1<<"|"<<valor2<<"] ";
}

Ficha::~Ficha()     //Destructor.
{
}