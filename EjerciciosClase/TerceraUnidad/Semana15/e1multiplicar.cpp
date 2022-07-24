/*////////////////////////////ENUNCIADO////////////////////////////

Implemente una función que reciba dos parámetros, una matriz "x" y un
valor, que multiplique los elementos de dicha matriz por ese valor.

    int x[3][4][2] = {{{1,2},{4,5},{7,8},{1,2}},
                    {{10,11},{13,14},{16,17},{1,2}},
                    {{19,20},{22,23},{25,26},{1,2}}};

La implementación debe funcionar para cualquier tamaño de matriz
tridimensional.
La implementación debe deducir el tamaño para cada dimensión.
Forma de llamar a la función multiplicar(x, 4); significa que cada
elemento de la matriz se multiplicará por 4.
Implemente además una función para imprimir la matriz tridimensional.

*/

/*////////////////////////////CODIGO////////////////////////////*/
#include <iostream>

template<size_t N,size_t R,size_t T>        //Template para la deduccion de tamaño de la matriz.
void mostrar(int (&matriz)[T][R][N])        //Funcion para imprimir la matriz.
{
    for (size_t i = 0; i<T; i++)
    {
        for (size_t j = 0; j < R; j++)
        {
            for (size_t k = 0; k < N; k++)
            {
                std::cout<<matriz[i][j][k]<<" ";        //Se imprime cada valor.
            }   
        }
    }
    std::cout<<"\n";
}

template<size_t T,size_t R,size_t N>        //Template para la deduccion de tamaño de la matriz.
void funcion_duplicar(int (&matriz)[T][R][N], int num)      //Funcion para multiplicar valores de la matriz.
{
    for (size_t i = 0; i<T; i++)
    {
        for (size_t j = 0; j < R; j++)
        {
            for (size_t k = 0; k < N; k++)
            {
                matriz[i][j][k] *= num;     //Se actualiza el valor multiplicado.
            }   
        }
    }
}

int main()          //Funcion Principal
{
    //Matriz tridimencional.
    int x[3][4][2] = {{{1,2},{4,5},{7,8},{1,2}},
                    {{10,11},{13,14},{16,17},{1,2}},
                    {{19,20},{22,23},{25,26},{1,2}}};

    mostrar(x);
    funcion_duplicar(x,4);
    mostrar(x);

    return 0;
}

/*////////////////////////////EJECUCION////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15> g++ e1multiplicar.cpp
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15> .\\a
1 2 4 5 7 8 1 2 10 11 13 14 16 17 1 2 19 20 22 23 25 26 1 2
4 8 16 20 28 32 4 8 40 44 52 56 64 68 4 8 76 80 88 92 100 104 4 8
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\TerceraUnidad\Semana15>

*/