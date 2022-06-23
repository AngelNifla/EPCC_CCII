#if !defined(_RACIONAL_H_)
#define _RACIONAL_H_

#include <iostream>         //Se incluye libreria especificada.
#include <cmath>            //Se incluye libreria especificada.

template<typename T>
class Racional      //Clase Racional.
{
private:
    int numerador;      //Atributos.
    int denominador;        //Atributos.
public:
    Racional();       //Constructor por defecto.
    Racional(int _num, int _den);     //Constructor por parametro.
    Racional(const Racional &R);        //Constructor Copia.

    void operator = (const Racional &R);        //Sobrecarga del operador de asignacion.
    Racional<T> operator + (const Racional &R); //Sobrecarga del operador de +.
    Racional<T> operator - (const Racional &R); //Sobrecarga del operador de -.
    Racional<T> operator * (const Racional &R); //Sobrecarga del operador de *.
    Racional<T> operator / (const Racional &R); //Sobrecarga del operador de /.

    void operator += (const Racional &R);       //Sobrecarga del operador de +=.
    void operator -= (const Racional &R);       //Sobrecarga del operador de -=.
    void operator *= (const Racional &R);       //Sobrecarga del operador de *=.
    void operator /= (const Racional &R);       //Sobrecarga del operador de /=.

    double Double();        //Funcion que retorna un aproximado.

    friend std::ostream& operator << (std::ostream &o,const Racional<T> &R)     //Sobrecarga del operador de insercion.
    {
        o<<R.numerador<<"/"<<R.denominador<<"\n";
        return o;
    }

    void Reducir();     //Funcion que reduce el numero racional.

    ~Racional();        //Destructor.
};  

template<typename T>
Racional<T>::Racional()     //Constructor por defecto.
{
    numerador = 0;
    denominador = 1;
}

template<typename T>
Racional<T>::Racional(int _num, int _den)       //Constructor por parametro.
{
    if (_den==0)
    {
        std::cout<<"-> Error.\n";
        exit(-1);
    }else
    {
        numerador = _num;
        denominador = _den;
        this->Reducir();
    }
}

template<typename T>
Racional<T>::Racional(const Racional &R)        //Constructor Copia.
{
    numerador = R.numerador;
    denominador = R.denominador;
    this->Reducir();
}

template<typename T>
void Racional<T>::operator = (const Racional &R)        //Sobrecarga del operador de asignacion.
{
    if (this!=&R)
    {
        if (R.numerador!=0)
        {
            this->numerador = R.numerador;
        }
        if (R.denominador != 0)
        {
            this->denominador = R.denominador;
        }
        this->Reducir();
    }  
}

template<typename T>
Racional<T> Racional<T>::operator + (const Racional &R)     //Sobrecarga del operador de +.
{
    if (this->denominador == R.denominador)
    {
        Racional<T> NEW(this->numerador + R.numerador,this->denominador);
        return NEW;
    }else
    {
        Racional<T> NEW((this->numerador*R.denominador) + (R.numerador*this->denominador),this->denominador * R.denominador);
        return NEW;
    }
}

template<typename T>
Racional<T> Racional<T>::operator - (const Racional &R)     //Sobrecarga del operador de -.
{
    if (this->denominador == R.denominador)
    {
        Racional<T> NEW(this->numerador - R.numerador,this->denominador);
        return NEW;
    }else
    {
        Racional<T> NEW((this->numerador*R.denominador) - (R.numerador*this->denominador),this->denominador * R.denominador);
        return NEW;
    }
}

template<typename T>
Racional<T> Racional<T>::operator * (const Racional &R)     //Sobrecarga del operador de *.
{
    Racional<T> NEW(this->numerador * R.numerador,this->denominador * R.denominador);
    return NEW;
}

template<typename T>
Racional<T> Racional<T>::operator / (const Racional &R)     //Sobrecarga del operador de /.
{
    Racional<T> NEW(this->numerador * R.denominador,this->denominador * R.numerador);
    return NEW;
}

template<typename T>
void Racional<T>::operator += (const Racional &R)       //Sobrecarga del operador de +=.
{
    if (this->denominador == R.denominador)
    {
        this->numerador += R.numerador;
    }else
    {
        this->numerador *= R.denominador;
        this->numerador += (this->denominador*R.numerador);
        this->denominador *= R.denominador;
    }
    this->Reducir();
}

template<typename T>
void Racional<T>::operator -= (const Racional &R)       //Sobrecarga del operador de -=.
{
    if (this->denominador == R.denominador)
    {
        this->numerador -= R.numerador;
    }else
    {
        this->numerador *= R.denominador;
        this->numerador -= (this->denominador*R.numerador);
        this->denominador *= R.denominador;
    }
    this->Reducir();
}

template<typename T>
void Racional<T>::operator *= (const Racional &R)       //Sobrecarga del operador de *=.
{
    this->numerador *= R.numerador;
    this->denominador *= R.denominador;
    this->Reducir();
}

template<typename T>
void Racional<T>::operator /= (const Racional &R)       //Sobrecarga del operador de /=.
{
    this->numerador *= R.denominador;
    this->denominador *= R.numerador;
    this->Reducir();
}

template<typename T>
double Racional<T>::Double()        //Funcion que retorna un aproximado.
{
    double num{(double)this->numerador};
    double den{(double)this->denominador};
    double resul{num/den};
    return round(resul);
}

template<typename T>
void Racional<T>::Reducir()     //Funcion que reduce el numero racional.
{
    int i{2};
    bool num{false},den{false};
    if (this->numerador<0)
    {
        this->numerador *= -1;
        num = true;
    }
    if (this->denominador<0)
    {
        this->denominador *= -1;
        den = true;
    }
    
    while (1)
    {
        if (this->numerador%i==0 && this->denominador%i==0)
        {
            this->numerador /=i;
            this->denominador /=i;
            i=2;
        }
        else if (i == this->numerador || i == this->denominador)
        {
            break;
        }else
        {
            i++;
        } 
    }
    
    if (num)
    {
        this->numerador *= -1;
    }
    if (den)
    {
        this->denominador *= -1;
    }
    
    
}

template<typename T>
Racional<T>::~Racional()        //Destructor.
{
}


#endif // _RACIONAL_H_
