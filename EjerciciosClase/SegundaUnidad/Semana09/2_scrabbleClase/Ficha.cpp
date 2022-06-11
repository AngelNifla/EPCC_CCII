#include "Ficha.h"          //Incluimos codigo del archivo especificado.

Ficha::Ficha(char _letra, int _valor)           //Constructor.
{
    letra = _letra;
    valor = this->valor_pieza(_valor);
}

int Ficha::valor_pieza(char _valor)         //Funcion para generar el valor la ficha segun el caracter.
{
    if (_valor == '[')      //Si se genera aleatoriamente el carcater '[' se entiende que es la ficha auxiliar de valor 0.
    {letra = '_';return 0;}
    else if (_valor == 'K')
    {return 5;}
    else if (_valor == 'Z' || _valor == 'Q')
    {return 10;}
    else if (_valor == 'J' || _valor == 'X')
    {return 8;}
    else if (_valor == 'D' || _valor == 'G')
    {return 2;}
    else if (_valor == 'B' || _valor == 'C' || _valor == 'M' || _valor == 'P')
    {return 3;}
    else if (_valor == 'F' || _valor == 'H' || _valor == 'V' || _valor == 'W' || _valor == 'Y')
    {return 3;}
    else{return 1;}  
}

void Ficha::imprimir()          //Funcion para imprimir los datos de la ficha.
{
    std::cout<<"\t\tFicha: "<<letra<<"\n";
    std::cout<<"\t\tValor: "<<valor<<"\n";
}

Ficha::~Ficha()         //Destructor.
{
}