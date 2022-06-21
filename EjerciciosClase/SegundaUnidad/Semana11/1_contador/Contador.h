#if !defined(_CONTADOR_H_)
#define _CONTADOR_H_

class Contador      //Clase contador.
{
private:
    int valor;      //Atributo: para el valor del contador.
public:
    static int instance_count;  //Atributo estatico: para contar los objetos creados.
    Contador();     //Constructor por defecto.
    Contador(int _valor);       //Constructor por parametro.
    Contador(const Contador &C);       //Constructor de Copia.
    Contador operator ++(int);      //Sobrecarga de operador de incremento postfijo.
    Contador& operator ++();        //Sobrecarga de operador de incremento prefijo.

    int get_valor()         //Funcion para retornar el valor actual del contador.
    {
        return valor;
    }
    
    ~Contador();        //Destructor.
};

#endif // _CONTADOR_H_
