#include "Contador.h"           //Se incluye el codigo del archivo especificado.

int Contador::instance_count = 0;       //Inicializacion del contador de objetos.

Contador::Contador()        //Constructor por defecto.
{
    valor = 0;
    ++instance_count;       //Se aumenta la variable estatica.
}

Contador::Contador(int _valor)      //Constructor por parametro.
{
    valor = _valor;
    ++instance_count;       //Se aumenta la variable estatica.
}

Contador::Contador(const Contador &C)      //Constructor de Copia.
{
    valor = C.valor;
    ++instance_count;       //Se aumenta la variable estatica.
}

Contador Contador::operator ++(int)         //Sobrecarga de operador de incremento postfijo.
{
    Contador temp{*this};
    ++(*this);
    return temp;
}

Contador& Contador::operator ++()           //Sobrecarga de operador de incremento prefijo.
{
    ++valor;
    return *this;
}

Contador::~Contador()       //Destructor.
{
    --instance_count;       //Se disminuye la variable estatica.
}