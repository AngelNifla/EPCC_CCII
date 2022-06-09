/*
Tabla de multiplicación. Bucles
*/

#include <iostream>

using namespace std;

int main()
{

    cout<<"\t*|";
    for (int i = 1; i <= 10; i++)   //primera fila
    {
        cout<<"\t"<<i;
    }

    cout<<"\n";
    for (int i = 0; i < 90; i++)    //fila de separación
    {
        if(i == 9)
        {
            cout<<"|";
        }else
        {
            cout<<"-";
        }
    }

    for (int i = 1; i <=10; i++)    //filas restantes
    {
        if(i==10)   //cuando i es 10, regulamos el espacios de la primera columna 
        {
            cout<<"\n       "<<i<<"|";
        }else
        {
            cout<<"\n\t"<<i<<"|";
        }
        for (int j = 1; j <= 10; j++)
        {
            cout<<"\t"<<j*i;
        }
    }

    return 0;
    
}