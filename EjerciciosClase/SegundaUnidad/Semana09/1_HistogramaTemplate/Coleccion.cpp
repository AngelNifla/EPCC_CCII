#include "Coleccion.h"              //Se incluye codigo del archivo especificado.

template<class T>           //Template.
Coleccion<T>::Coleccion(std::vector<T> _vector)             //Constructor.
{
    coleccion = _vector;
    this->ordenar_coleccion_creciente(coleccion);
    dato_mayor = coleccion_ordenada.back();
    dato_menor = coleccion_ordenada.front();
}

template<class T>           //Template.
void Coleccion<T>::ordenar_coleccion_creciente(std::vector<T> _coleccion)               //Funcion para ordenar la coleccion en forma crecinte.
{
    T aux{};
    coleccion_ordenada = coleccion;

    for (int i = 0; i < coleccion_ordenada.size(); i++)
    {
        for (int j = i+1; j < coleccion_ordenada.size(); j++)
        {
            if ((coleccion_ordenada[j])<=(coleccion_ordenada[i]))
            {
                aux = (coleccion_ordenada[j]);
                coleccion_ordenada[j]=(coleccion_ordenada[i]);
                (coleccion_ordenada[i])=aux;
            }
        } 
    }
}

template<class T>           //Template.
void Coleccion<T>::Histograma(int n_intervalo)              //Funcion para hallar las repeticiones, aqui se modifica el vector de colecciones ordenadas.
{
    double rango_double{(double)(dato_mayor)/(double)(n_intervalo)};
    int rango_int=(round(rango_double))+dato_menor;
    int size_del_intervalo{round(rango_double)};

    int cont{1};
    
    for (int i = 0; i < coleccion_ordenada.size(); i++)
    {
        for (int j = i+1; j < coleccion_ordenada.size(); j++)           
        {
            if (coleccion_ordenada[j]==(coleccion_ordenada[i]))     //Se hay elementos repetitivos en el vector ordenado, procede:
            {
                coleccion_ordenada.erase((coleccion_ordenada.begin())+j);   //Eliminar las repeticiones
                j--;
                cont++;                 //y contabilizarlas al mismo tiempo.
            }else
            {
                break;
            }
        }
        if (i==0)       //Si se inicializa el primer elemento,
        {
            histograma.push_back(cont);     //se agrega al final(inicio en este punto) del histograma,lo contabilizado.
        }else if ((coleccion_ordenada[i])<rango_int)            //Si el segundo elemento esat en el rango del intervalo:
        {
            histograma.back()=(histograma.back()+cont);         //Nos ubicamos al ultimo elemnto del histograma y le sumamos la nueva contablilizacion.
            cont = 1;       //Reiniciamos el contabilizador.
        }else       //Si se encuentra fuera del rango:
        {
            rango_int=rango_int+size_del_intervalo;     //Se pasa al siguiente intervalo.
            /*if ((coleccion_ordenada[i])<=rango_int)         //Y si el elemnto esta en ese intervalo:
            {*/
                histograma.push_back(cont);     //se agrega al final del histograma,la nueva contabilizacion.
            /*}else               //Si no:
            {
                rango_int=rango_int+size_del_intervalo;
                histograma.push_back(0);
            }*/
            cont = 1;       //Reiniciamos el contabilizador.
        }
    }
    if (n_intervalo != histograma.size())       //Al final, si el numero de lementos en el histograma es diferente a los que se pidio, 
    {
        std::cout<<"\n\t-> No se puede obtener ese numero de intervalos.\n";               //Se manda que es posible el histograna con ese numero de intervalos.
        exit(-1);           //Y termina el programa.
    }
    
}

template<class T>           //Template.
void Coleccion<T>::mostrar_histograma()             //Funcion paara mostrar el vector histograma.
{
    for (int i = 0; i < histograma.size(); i++)
    {
        std::cout<<histograma[i]<<" ";
    }
    std::cout<<"\n";
}

template<class T>           //Template.
Coleccion<T>::~Coleccion()              //Destructor.
{
}