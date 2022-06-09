/*
Escriba una función areFactors que tome un entero n y un
vector de enteros, y devuelva true si los números en el
vector son todos factores de n (lo que significa que n es
divisible por todos ellos).
*/

#include <iostream>
#include <vector>

bool areFactors(int numero, std::vector<int>* vector)
{
    int cont{0};
    for (int k = 0; k < (*vector).size(); k++)  //Bucle que ingresa a cada valor del vector.
    {
        if(numero%(*vector)[k]==0)   //Si el numero es divisible por el valor de los numeros del vector
        {
            cont=cont+1;    //se aumenta el numero contador.
        }
    }
    if (cont==(*vector).size())    //Si el contador es igual a tdoos los numeros del vector
    {
        return true; //se retorna true.
    }else   //Si no,
    {
        return false;   //devuelve false, proque no cumple lo pedido.
    }
}

int main()
{
    int size{0},numero{0};  //Variables para el tamaño del vector y el numero a ingresar. 
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;       //Se ingresa el numero.
    std::cout<<"Cuantos numeros va a ingresar?: ";
    std::cin>>size;         //Se ingresa el tamaño del array.
    std::vector<int> vector(size);  //Se crea el vector por parametro.

    for (int i = 0; i < size; i++)  //Bucle que ingresa los datos en el vector.
    {
        std::cout<<"Insertar elemento: ";
        std::cin>>vector[i];    //Se ingresa un valor en cada ciclo.
    }

    if (areFactors(numero, &vector))   //Se hace la consulta a la funcnion areFactors.
    {
        std::cout<<"-> TRUE";//Si es true, se imprime true.
    }else
    {
        std::cout<<"-> FALSE";  ///Si es falso se impreme false.
    }

    return 0;
}
