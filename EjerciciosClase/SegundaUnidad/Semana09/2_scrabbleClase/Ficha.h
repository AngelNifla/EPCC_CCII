#ifndef _FICHA_H_
#define _FICHA_H_

#include <iostream>         //Incluimos la libreria especificada.

class Ficha         //Clase Ficha.
{
private:
    char letra;         //Atributo: para el cartacter de la ficha.
    int valor;          //Atributo: para el valor de la ficha.
public:
    Ficha(char _letra, int _valor);         //Constructor.
    void imprimir();        //Funcion para imprimir los datos de la ficha.
    int valor_pieza(char _valor);       //Funcion para generar el valor la ficha segun el caracter.
    ~Ficha();           //Destructor.
};

#endif