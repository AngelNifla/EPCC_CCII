#include <iostream>

using namespace std;

int main()
{
    int num_total;

    cout<<"¿Cuantos numeros va a ingresar?:  ";
    cin>>num_total;

    int num[num_total];

    for (int i = 0; i < num_total; i++)     //entrada de valores
    {
        cout<<i+1<<". ingrese valor :  ";
        cin>>num[i];

        if(num[i]<=0)       //verificar si la entrada es positiva
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