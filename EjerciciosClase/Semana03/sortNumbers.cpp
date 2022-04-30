/*
Tu trabajo es escribir un programa que lea números enteros de
la entrada estándar, los clasifica en orden ascendente y
luego imprime los números ordenados, uno por línea.
*/

#include <iostream>

using namespace std;

int main()
{
    int num_total;
    cout<<"¿Cauantos numeros va a ingresar? :   ";
    cin>>num_total; //ingreso de el tamaño para el array

    int num[num_total]; //se crea un array con el tamaño ingresado

    for (int i = 0; i < num_total; i++) //ingreso de numeros al array
    {
        cout<<"Ingrese valor :   ";
        cin>>num[i];  
    }

    for (int i = 0; i < num_total; i++) //selecciona cada valor i para ser estudiado
    {
        for (int j = i+1; j < num_total; j++)   //verifica el valor i con los demas valores
        {
            int aux;
            if(num[j]<num[i])   //si el valor i es menor con uno de los otros, intercambian posición
            {
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;  
            }
        }
    }

    for (int i = 0; i < num_total; i++) // imprime cada valor del array ordenado
    {
        cout<<num[i]<<" ";
    }
    
    return 0;
}