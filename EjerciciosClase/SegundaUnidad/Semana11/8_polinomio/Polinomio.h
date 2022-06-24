#if !defined(_POLINOMIO_H_)
#define _POLINOMIO_H_

#include <iostream>         //Se incluye la libreria especificada.
#include <vector>           //Se incluye la libreria especificada.

template<typename T>
class Polinomio         //Clase Polinomio.
{
private:
    int grado;      //Atributo: para el grado.
    T x;        //Atributo: para la variable x.
    std::vector<T> coeficientes;        //Vector para los coeficientes.
public:
    Polinomio(int _grado);          //Constructor.

    friend std::ostream& operator << (std::ostream &o, const Polinomio<T> &P)           //Sobrecarga del operador <<;
    {
        std::string cadena{};
        for (int i = 0,g = P.grado; i < P.grado + 1; i++,g--)
        {
            if (i!=P.grado)
            {
                cadena += "("+(std::to_string(P.coeficientes[i]))+")x^"+(std::to_string(g));
            }else
            {
                cadena += "("+(std::to_string(P.coeficientes[i]))+")";
            }
            
            if (i!=P.grado)
            {
                cadena += " + ";
            }
        }
        o<<"P(x) = "<<cadena<<"\n";
        return o;
    }

    void operator += (const Polinomio<T> &P);       //Sobrecarga del operador +=.
    void operator -= (const Polinomio<T> &P);       //Sobrecarga del operador -=.

    ~Polinomio();           //Destructor.
};

template<typename T>
Polinomio<T>::Polinomio(int _grado)     //Constructor.
{
    grado = _grado;
    T coe{};
    std::cout<<"Ingresando coeficientes:\n";
    for (int i = grado; i >=0 ; i--)
    {
        std::cout<<"\tIngrese el coeficiente "<<i<<" : ";
        std::cin>>coe;
        coeficientes.push_back(coe);
    }
}


template<typename T>
void Polinomio<T>::operator += (const Polinomio<T> &P)      //Sobrecarga del operador +=.
{
    std::vector<T> aux;
    int _grado{P.grado},diferencia{P.grado-this->grado},pol{2};
    if (this->grado > P.grado)
    {
        _grado = this->grado;
        diferencia *=-1;
        pol = 1;
    }
    for (int i = 0; i < _grado+1 ; i++)
    {
        if (i<diferencia && pol == 1)
        {
            aux.push_back(this->coeficientes[i]);
        }else if (i<diferencia && pol == 2)
        {
            aux.push_back(P.coeficientes[i]);
        }else
        {
            if (pol == 1)
            {
                aux.push_back(this->coeficientes[i]+P.coeficientes[i-diferencia]);
            }else
            {
                aux.push_back(this->coeficientes[i-diferencia]+P.coeficientes[i]);
            }
        }  
    }
    this->coeficientes = aux;
    this->grado = _grado;
    aux.~vector();
}

template<typename T>
void Polinomio<T>::operator -= (const Polinomio<T> &P)      //Sobrecarga del operador -=.
{
    std::vector<T> aux;
    int _grado{P.grado},diferencia{P.grado-this->grado},pol{2};
    if (this->grado > P.grado)
    {
        _grado = this->grado;
        diferencia *=-1;
        pol = 1;
    }
    for (int i = 0; i < _grado+1 ; i++)
    {
        if (i<diferencia && pol == 1)
        {
            aux.push_back(this->coeficientes[i]);
        }else if (i<diferencia && pol == 2)
        {
            aux.push_back(P.coeficientes[i]);
        }else
        {
            if (pol == 1)
            {
                aux.push_back(this->coeficientes[i]-P.coeficientes[i-diferencia]);
            }else
            {
                aux.push_back(this->coeficientes[i-diferencia]-P.coeficientes[i]);
            }
        }  
    }
    this->coeficientes = aux;
    this->grado = _grado;
    aux.~vector();
}

template<typename T>
Polinomio<T>::~Polinomio()      //Destructor.
{
}


#endif // _POLINOMIO_H_