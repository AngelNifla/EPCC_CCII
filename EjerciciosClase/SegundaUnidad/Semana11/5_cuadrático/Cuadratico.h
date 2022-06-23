#if !defined(_CUADRATICO_H_)
#define _CUADRATICO_H_

#include <iostream>         //Se incluye libreria especificada.

class Cuadratico        //Clase Cuadratico.
{
private:
    double x;       //Atributos para la variable.
    double a;       //Atributos para la constante.
    double b;       //Atributos para la constante.
    double c;       //Atributos para la constante.
public:
    Cuadratico();       //Constructor por defecto.
    Cuadratico(double _a,double _b, double _c);     //Constructor por parametro.
    Cuadratico(const Cuadratico &C);        //Constructor Copia.

    Cuadratico& operator = (const Cuadratico &C);       //Sobrecarga del operador de asignacion.
    double operator () (const double _x);       //Sobrecarga del operador de llamada.
    friend std::ostream& operator << (std::ostream &o,const Cuadratico &C);            //Sobrecarga del operador de insercion.

    ~Cuadratico();      //Destructor.
};

#endif // _CUADRATICO_H_
