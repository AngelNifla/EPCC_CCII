#if !defined(_NODO_H_)
#define _NODO_H_

#include <iostream>         //Se utiliza la libreria especificada.

template<typename T>
class Nodo          //clase Nodo.
{
    private:
        T elem;       //Atributo: valor que guardara un nodo.
        Nodo *next;     //Atributo: direccion del siguiente nodo.
    public:
        Nodo();             //Constructor principal.
        Nodo(T _elem);    //Constructor por parametro.

        void mostrar_nodo();       //Funcion para immprimir un nodo.
        int get_elem()      //Funcion para obtener el valor actual.
        {     
            return elem;
        };
        Nodo<T>* get_next(){       //Funcion para obtener la direccion actual.
            return next;
        };
        void set_elem(T _elem)    //Funcion para ingresar nuevo valor.
        {   
            elem = _elem;
        }
        void set_next(Nodo*_next)       //Funcion para ingresar nueva direccion.
        {
            next = _next;
        }
        
        ~Nodo();    //Destructor.
};

template<typename T>
Nodo<T>::Nodo()        //Constructor principal.
{
    elem = NULL;
    next = NULL;
}

template<typename T>
Nodo<T>::Nodo(T _elem)       //Constructor por parametro.
{
    elem = _elem;
    next = NULL;
}

template<typename T>
void Nodo<T>::mostrar_nodo()          //Funcion para imprimir un nodo.
{
    std::cout << elem << "-> ";
}

template<typename T>
Nodo<T>::~Nodo()       //Destructor.
{
}

#endif // _NODO_H_
