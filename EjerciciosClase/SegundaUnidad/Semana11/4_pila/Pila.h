#if !defined(_PILA_H_)
#define _PILA_H_

#include "Nodo.h"       //Se utiliza codigo del archivo especificado.

template<typename T>
class Pila          //Clase Pila.
{
private:
    int size_definido;  //Atributo: valor del tamaño definido de la pila.
    Nodo<T> *head;         //Atributo: direccion del primer(cabeza) nodo de la pila.
    int size;           //Atributo: valor del tamaño de la pila.
public:
    Pila(int _size);             //Constructor.
    
    void top();                     //Funcion que muestra el ultimo elemento.
    T pop();            //Funcion que elimina el ultimo nodo de la pila.
    void push(T _elem);           //Funcion para insertar un solo nodo a la pila de forma secuencial (al inicio).
    void clear();               //Funcion que elimina todos los nodos.
    int Size();                 //Funcion que devuelve la cantidad de elmentos en la pila.
    bool full();                //Funcion que comprueba si la pila esta llena.
    bool empty();                //Funcion que comprueba si la pila esta vacia.
    void mostrar_Pila();        //Funcion para mostrar la pila.

    ~Pila();            //Destructor.
};

template<typename T>
Pila<T>::Pila(int _size)                    //Constructor.
{
    head = NULL;
    size = NULL;
    T valor{};
    size_definido = _size;
    for (int i = 0; i < _size; i++) {
        std::cout<<"Ingrese valor "<<i+1<<": ";
        std::cin>>valor;
        this->push(valor);
    }
}

template<typename T>
void Pila<T>::top()                     //Funcion que muestra el ultimo elemento.
{
    if (size != 0)
    {
        Nodo<T> *aux=head;
        while (aux->get_next() != NULL)
        {
            if (aux->get_next()->get_next() ==NULL)
            {
                aux->get_next()->mostrar_nodo();
                return;
            }
            aux = aux->get_next();
        }
        if (aux == head)
        {
            aux->mostrar_nodo();
        }else
        {
            std::cout<<"-> La pila esta vacia.\n";
        }
    }else
    {
        std::cout<<"-> La pila esta vacia.\n";
    }   
}

template<typename T>
T Pila<T>::pop()          //Funcion que elimina el ultimo nodo de la pila.
{
    Nodo<T> *elim{};
    Nodo<T> *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.
    int valor{};
    while (aux->get_next() != NULL)
    {
        if (aux->get_next()->get_next() ==NULL)
        {
            elim = aux->get_next();
            valor = elim->get_elem();
            elim->~Nodo();
            if (aux == head)
            {
                aux->set_next(NULL);
                return valor;
            }
            break;
        }
        aux = aux->get_next();
    }
    if (aux == head)
    {
        elim = head;
        valor = elim->get_elem();
        elim->~Nodo();
        head = NULL;
    }else
    {
        aux->set_next(NULL);
    }
    size--;
    return valor;
}

template<typename T>
void Pila<T>::push(T _elem)            //Funcion para insertar un solo nodo a la pila de forma secuencial (al final).
{
    if (size == size_definido)
    {
        std::cout<<"-> La pila esta llena.\n";
    }else
    {
        Nodo<T> *new_Nodo = new Nodo<T>(_elem);       //Puntero aun nodo nuevo e inicializando(creado) con un valor.
        Nodo<T> *aux = head;                   //Puntero a un nodo auxiliar que apunta a un nodo.

        if (!head)
        {
            head = new_Nodo;        //Se agrega una la direccion del nuevo nodo creado.
        }else
        {
            while (aux->get_next() != NULL)
            {
                aux = aux->get_next();
            }
            aux->set_next(new_Nodo);
        }
        size++;
    }
}

template<typename T>
void Pila<T>::clear()               //Funcion que elimina todos los nodos.
{
    Nodo<T> *elim{};
    while (head != NULL)
    {
        elim = head;
        head = head->get_next();
        elim->~Nodo();
        size--;
    }
}

template<typename T>
int Pila<T>::Size()        //Funcion para mostrar la pila.
{
    return size;
}

template<typename T>
bool Pila<T>::full()                //Funcion que comprueba si la pila esta llena.
{
    if (size == size_definido)
    {
        return true;
    }else
    {
        return false;
    } 
}

template<typename T>
bool Pila<T>::empty()                //Funcion que comprueba si la pila esta vacia.
{
    if (size == 0)
    {
        return true;
    }else
    {
        return false;
    }
}

template<typename T>
void Pila<T>::mostrar_Pila()         //Mostrar la pila.
{
    Nodo<T> *aux = head;       //Puntero auxiliar que apunta al nodo(cabeza).
    if (!head)  //Si la el nodo(cabeza) esta vacia.
    {
        std::cout<<"-> La pila esta vacia.\n";  //informamos que la pila esta vacia.
    }else       //Si no,
    {
        while(aux) //Minetras el nodo de aux apunte a un nodo
        {
            aux->mostrar_nodo();    //se imprimira el nodo al que apunta aux.
            if (!aux->get_next())   //Si la direccion del nodo de aux esta vacia
            {
                std::cout<<"vacio(FIN)";      //se imprimer vacio porque ya no hay mas nodos en la pila.
            }      //Si no,
            aux = aux->get_next();      //El aux se le agrega la direccion del nodo de aux.
   
        }
        std::cout<<"\n";
    }
}

template<typename T>
Pila<T>::~Pila()                   //Destructor.
{
}

#endif // _PILA_H_

