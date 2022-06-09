/*
Producto máximo de dos números en una secuencia
• Dada una secuencia de n números no negativos y mayores que cero.
• El objetivo es encontrar el mayor número que se pueda obtener
  multiplicando dos números de esta secuencia.
• Usando un bucle for
*/

#include <iostream>

using namespace std;

int main()
{
    int num_total;  //variable para los n numeros

    cout<<"¿Cuantos numeros va a ingresar?:  ";
    cin>>num_total;

    while (num_total<=0)    //bucle para que se ingrese solo numeros positivos para n
    {
        cout<<"-> El numero de valores a INGRESAR debe ser positivo:  ";
        cin>>num_total;
    }
    

    int num[num_total];

    for (int i = 0; i < num_total; i++)     //entrada de valores
    {
        cout<<i+1<<". ingrese valor :  ";
        cin>>num[i];

        while(num[i]<=0)       //verificar si la entrada es positiva
        {
            cout<<"\t! ingrese solo valores positivos.\n\t";
            cout<<i+1<<". ingrese nuevamente el valor :  ";
            cin>>num[i];
        }
    }

    for (int i = 0; i < num_total; i++)     //selecciona cada valor i para ser estudiado
    {
        int aux;    //variable auxiliar;
        for (int j = i+1; j < num_total; j++)       //verifica el valor i con los demas valores
        {
            if(num[j]<num[i])       //si el valor i es menor con uno de los otros, intercambian posición
            {
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
            }
        }
    }

    cout<<"-> El producto máximo de dos numeros ingresados es : "<<num[num_total-1]*num[num_total-2];
    
    return 0;
}