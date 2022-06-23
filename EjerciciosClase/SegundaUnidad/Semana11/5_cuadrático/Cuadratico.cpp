#include "Cuadratico.h"         //Se incluye codigo del archivo especificado.

Cuadratico::Cuadratico()       //Constructor por defecto.
{
    a = 0;
    b = 0;
    c = 0;
}

Cuadratico::Cuadratico(double _a,double _b, double _c)     //Constructor por parametro.
{
    a = _a;
    b = _b;
    c = _c;
}

Cuadratico::Cuadratico(const Cuadratico &C)        //Constructor Copia.
{
    a = C.a;
    b = C.b;
    c = C.c;
}

Cuadratico& Cuadratico::operator = (const Cuadratico &C)       //Sobrecarga del operador de asignacion.
{
    if (this!=&C)
    {
        this->a = C.a;
        this->b = C.b;
        this->c = C.c;
    }
    return *this;
}

double Cuadratico::operator () (const double _x)       //Sobrecarga del operador de llamada.
{
    double respuesta{(this->a*(_x*_x))+(this->b*_x)+(this->c)};
    return respuesta;
}

std::ostream& operator << (std::ostream &o,const Cuadratico &C)            //Sobrecarga del operador de insercion.
{
    o<<"F(x) = "<<C.a<<"x^2 + "<<C.b<<"x + "<<C.c<<"\n";
    return o;
}

Cuadratico::~Cuadratico()      //Destructor.
{
}