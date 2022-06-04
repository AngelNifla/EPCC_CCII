/*
Dado el tamaño, devuelva una matriz cuadrada de números en orden espiral. La matriz debe ser un
vector de vectores.
La matriz debe llenarse con números naturales, comenzando desde 1 en la esquina superior izquierda,
aumentando en un orden espiral hacia adentro en el sentido de las agujas del reloj.
Ejemplos
Matriz espiral de tamaño 3
1 2 3
8 9 4
7 6 5
Matriz espiral de tamaño 4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
*/

#include <iostream>
#include <vector>

using namespace std;

class matrizEspiral
{
private:
    int size;
    vector<vector<int>> matriz;
public:
    matrizEspiral(int _size);
    void imprimir();
    void llenar_matriz();
    ~matrizEspiral();
};

matrizEspiral::matrizEspiral(int _size)
{
    size = _size;
    llenar_matriz();

}

void matrizEspiral::llenar_matriz()
{
    vector<vector<int>> matriz1(size,vector<int> (size,0));
    matriz = matriz1;

    int I=0;
    int Columna=size;
    int Fila=size;
    int j=0;
    int i=0;
    int numeros_naturales=1;

    while (numeros_naturales!=size*size+1)
    {

        for(j=I;j <Columna ;j++)
        {matriz[i][j] = numeros_naturales++;}

        for(i=I+1;i< Fila ;i++)
        {matriz[i][j-1]= numeros_naturales++;}

        for(j= Columna-1 ;j>I && i>I+1; j--)
        {matriz[i-1][j-1]= numeros_naturales++;} 

        for(i=Fila-1;i>I+1;i--)
        {matriz[i-1][j]= numeros_naturales++;}

        I++;
        Columna--;
        Fila--;
    }
}

void matrizEspiral::imprimir()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

matrizEspiral::~matrizEspiral()
{
}


int main()
{
    int size{0};
    cout<<"Ingrese el size de la matriz: ";
    cin>>size;
    matrizEspiral M(size);
    M.imprimir();

}