/*
Escriba un programa decimalToBinary para convertir un número decimal a
binario
*/

#include <iostream>
#include <vector>

void decimalToBinary(int _n,std::vector<int> *vector)      //Funcion que llama a si misma(recursiva).
{
    if (_n != 0)        //Si el numero(cociente entera) es diferente de 0,
    {
        decimalToBinary(_n/2, vector);    //La funcion se llama a si misma enviando como parametro la division del parametro entre 2, Ademas
        if (_n%2 == 0)    //Si el parametro es divisible entre 2, 
        {
            (*vector).push_back(0);        //Se agrega el valor 0, al final del vector.
        }else if (_n%2 != 0)    //Si el parametro no es divisible entre 2,
        {
            (*vector).push_back(1);        //Se agrega el valor 1, al final del vector.
        }
    }else   //Si el numero(cociente entera) es 0,
    {
        //no se hace nada, hasta este punto, ya se hallaron todos los digitos en binario.
    }
    
}

int main()      //Funcion principal.
{
    std::vector<int> binario;       //Se crea un vector, para almacenar los digitos binarios.
    int n{NULL};        //Variable general, puede ser usada por las dos funciones.
    std::cout<<"Ingrese un numero: ";
    std::cin>>n;        //Se introduce valor a la varibale general.
    decimalToBinary(n,&binario);       //Se llama a la funcion enviando como parametro el valor 0.
    for (int i = 0; i < binario.size(); i++)        //Se imprime cada valor del vector.
    {
        std::cout<<binario[i];
    }
    return 0;
}

/*
------------OTRA FORMA---------------
*/

/*
void decimalToBinary(int _n)      //Funcion que llama a si misma(recursiva).
{
    if (_n == 0)        //Si el numero es 0,
    {
        //no se hace nada.
    }else if (_n%2 == 0)    //Si el parametro es divisible entre 2, 
    {
        decimalToBinary(_n/2);    //La funcion se llama a si misma enviando como parametro la division del parametro entre 2,
        std::cout<<0;   //Y se imprime el valor 0.
    }else if (_n%2 != 0)    //Si el parametro no es divisible entre 2,
    {
        decimalToBinary(_n/2);        //La funcion se llama a si misma enviando como parametro la division del parametro entre 2,
        std::cout<<1;        //Y se imprime el valor 1.
    }
}

int main()      //Funcion principal.
{
    int n{NULL};        //Variable general, puede ser usada por las dos funciones.
    std::cout<<"Ingrese un numero: ";
    std::cin>>n;        //Se introduce valor a la varibale general.
    decimalToBinary(n);       //Se llama a la funcion enviando como parametro el valor 0.
    return 0;
}*/