#ifndef _COLECCION_H_
#define _COLECCION_H_

#include <iostream>     //Se importa librerias.
#include <vector>       //Se importa librerias.
#include <cmath>        //Se importa librerias.


template<class T>           //Template.
class Coleccion         //Clase Coleccion.
{
private:
    std::vector<T> coleccion;           //vector para la coleccion desordenada.
    std::vector<T> coleccion_ordenada;          //vector para la coleccion ordenada, en la ejecucion se editara.
    std::vector<int> histograma;            //vector para agrupar las repeticiones en base a un rango e intervalos.
    T dato_mayor;           //Variable: dato mayor.
    T dato_menor;           //Variable: dato menor.
public:
    Coleccion(std::vector<T> _vector);      //Constructor.
    void ordenar_coleccion_creciente(std::vector<T> _coleccion);        //Funcion para ordenar la coleccion en forma crecinte.
    void Histograma(int n_intervalo);           //Funcion para hallar las repeticiones, aqui se modifica el vector de colecciones ordenadas.
    void mostrar_histograma();                  //Funcion paara mostrar el vector histograma.
    ~Coleccion();       //Destructor.
};

#endif