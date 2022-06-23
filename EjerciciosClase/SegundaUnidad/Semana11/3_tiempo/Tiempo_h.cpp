#include "Tiempo.h"         //Se incluye codigo del archivo especificado.

Tiempo::Tiempo()       //Constructor por defecto.
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Tiempo::Tiempo(int _hora,int _minuto, int _segundo)        //Constructor por parametro.
{
    if (24>_hora>=0 && 60>_minuto>=0 && 60>_segundo>=0)
    {
        hora = _hora;
        minuto = _minuto;
        segundo = _segundo;
    }else
    {
        std::cout<<"\n-> Hora incorrecta.";
    }
}

/*
Tiempo& Tiempo::operator + (const Tiempo &T)             //Otra forma de sobrecarga del operador +.
{
    int segundos_totales{(T.hora*3600)+(T.minuto*60)+T.segundo};
    for (int i = 0; i < segundos_totales; i++)
    {
        this->segundo++;
        if (this->segundo == 60)
        {
            this->segundo = 0;
            this->minuto++;
        }
        if (this->minuto== 60)
        {
            this->minuto = 0;
            this->hora++;
        }
        if (this->hora == 24)
        {
            this->hora = 0;
        } 
    }
    return *this;
}*/

Tiempo operator + (const Tiempo &T,const Tiempo &R)         //Sobrecarga del operador +.
{
    int segundos_totales{(R.hora*3600)+(R.minuto*60)+R.segundo};
    int hora{T.hora},minuto{T.minuto},segundo{T.segundo};
    for (int i = 0; i < segundos_totales; i++)
    {
        segundo++;
        if (segundo == 60)
        {
            segundo = 0;
            minuto++;
        }
        if (minuto== 60)
        {
            minuto = 0;
            hora++;
        }
        if (hora == 24)
        {
            hora = 0;
        } 
    }
    return Tiempo(hora,minuto,segundo);
}

/*
Tiempo& Tiempo::operator - (const Tiempo &T)             //Otra forma de sobrecarga del operador -.
{
    int segundos_totales{(T.hora*3600)+(T.minuto*60)+T.segundo};
    for (int i = 0; i < segundos_totales; i++)
    {
        this->segundo--;
        if (this->segundo <= 0)
        {
            this->segundo = 59;
            this->minuto--;
        }
        if (this->minuto <= 0)
        {
            this->minuto = 59;
            this->hora--;
        }
        if (this->hora <= 0)
        {
            this->hora = 23;
        }
    }
    return *this;
}*/

Tiempo operator - (const Tiempo &T,const Tiempo &R)         //Sobrecarga del operador -.
{
    int segundos_totales{(R.hora*3600)+(R.minuto*60)+R.segundo};
    int hora{T.hora},minuto{T.minuto},segundo{T.segundo};
    for (int i = 0; i < segundos_totales; i++)
    {
        segundo--;
        if (segundo < 0)
        {
            segundo = 59;
            minuto--;
        }
        if (minuto < 0)
        {
            minuto = 59;
            hora--;
        }
        if (hora < 0)
        {
            hora = 23;
        }
    }
    return Tiempo(hora,minuto,segundo);
}

bool Tiempo::operator == (const Tiempo &T)         //Sobrecarga del operador de ==.
{
    if (this->hora==T.hora && this->minuto==T.minuto && this->segundo==T.segundo)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Tiempo::operator != (const Tiempo &T)         //Sobrecarga del operador de !=.
{
    if (this->hora!=T.hora || this->minuto!=T.minuto || this->segundo!=T.segundo)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Tiempo::operator > (const Tiempo &T)          //Sobrecarga del operador de >.
{
    int num_segundos_This{(this->hora*3600)+(this->minuto*60)+this->segundo};
    int num_segundos_T{(T.hora*3600)+(T.minuto*60)+T.segundo};
    if (num_segundos_This>num_segundos_T)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Tiempo::operator < (const Tiempo &T)          //Sobrecarga del operador de <.
{
    int num_segundos_This{(this->hora*3600)+(this->minuto*60)+this->segundo};
    int num_segundos_T{(T.hora*3600)+(T.minuto*60)+T.segundo};
    if (num_segundos_This<num_segundos_T)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Tiempo::operator >= (const Tiempo &T)         //Sobrecarga del operador de >=.
{
    int num_segundos_This{(this->hora*3600)+(this->minuto*60)+this->segundo};
    int num_segundos_T{(T.hora*3600)+(T.minuto*60)+T.segundo};
    if (num_segundos_This>=num_segundos_T)
    {
        return true;
    }else
    {
        return false;
    }
}

bool Tiempo::operator <= (const Tiempo &T)         //Sobrecarga del operador de <=.
{
    int num_segundos_This{(this->hora*3600)+(this->minuto*60)+this->segundo};
    int num_segundos_T{(T.hora*3600)+(T.minuto*60)+T.segundo};
    if (num_segundos_This<=num_segundos_T)
    {
        return true;
    }else
    {
        return false;
    }
}

std::ostream& operator >> (std::ostream &o,const Tiempo &T)         //Sobrecarga del operador de >> para mostrar la hora.
{
    if (T.hora < 12)
    {
        o<<T.hora<<" : "<<T.minuto<<" : "<<T.segundo<<" AM\n";
    }else
    {
        o<<T.hora<<" : "<<T.minuto<<" : "<<T.segundo<<" PM\n";
    }
    return o;
}

Tiempo::~Tiempo()              //Destructor.
{
}
