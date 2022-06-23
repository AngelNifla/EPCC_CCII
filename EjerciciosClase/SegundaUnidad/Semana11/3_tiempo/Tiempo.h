#if !defined(_TIEMPO_H_)
#define _TIEMPO_H_

#include <iostream>     //Se incluye la libreria especificada.

class Tiempo        //Clase tiempo.
{
private:
    int hora;           //Atributo para la hora.
    int minuto;         //Atributo para los minutos.
    int segundo;            //Atributo para los segundos.
public:
    Tiempo();       //Constructor por defecto.
    Tiempo(int _hora,int _minuto, int _segundo);        //Constructor por parametro.
    //Tiempo& operator + (const Tiempo &T);             //Otra forma de sobrecarga del operador +.
    friend Tiempo operator + (const Tiempo &T,const Tiempo &R);         //Sobrecarga del operador +.
    //Tiempo& operator - (const Tiempo &T);             //Otra forma de sobrecarga del operador -.
    friend Tiempo operator - (const Tiempo &T,const Tiempo &R);         //Sobrecarga del operador -.
    bool operator == (const Tiempo &T);         //Sobrecarga del operador de ==.
    bool operator != (const Tiempo &T);         //Sobrecarga del operador de !=.
    bool operator > (const Tiempo &T);          //Sobrecarga del operador de >.
    bool operator < (const Tiempo &T);          //Sobrecarga del operador de <.
    bool operator >= (const Tiempo &T);         //Sobrecarga del operador de >=.
    bool operator <= (const Tiempo &T);         //Sobrecarga del operador de <=.

    friend std::ostream& operator >> (std::ostream &o,const Tiempo &T);         //Sobrecarga del operador de >> para mostrar la hora.
    ~Tiempo();              //Destructor.
};

#endif // _TIEMPO_H_
