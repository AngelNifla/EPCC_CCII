#ifndef _FICHA_H_
#define _FICHA_H_

#include <iostream>     //Se incluye la libreria especificada.

class Ficha     //Clase Ficha.
{
private:
    int valor1;         //Atributo: para el valor 1 de la ficha.
    int valor2;         //Atributo: para el valor 2 de la ficha.
public:
    Ficha(int _val1, int _val2);            //Constructor.
    void imprimir();            //Funcion que imprime los valores de la ficha.
    ~Ficha();           //Destructor.

    int get_valor1()        //Funcion get que retorna el valor 1.
    {
        return valor1;
    }
    int get_valor2()        //Funcion get que retorna el valor 2.
    {
        return valor2;
    }
    void set_valor1(int _val)           //Funcion set que cambia el valor 1.
    {
        valor1 = _val;
    }
    void set_valor2(int _val)           //Funcion set que cambia el valor 2.
    {
        valor2 = _val;
    }
};

#endif