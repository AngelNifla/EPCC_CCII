/*
• La criba (sieve) de Eratóstenes es un algoritmo para
    encontrar todos los números primos hasta cualquier límite
    dado. 
• Escriba una función sieve que tome un parámetro entero, n,
    y devuelva un vector de bools que indique, para cada
    número de 0 a n - 1, si el número es primo. 
• https://codility.com/media/train/9-Sieve.pdf
*/

#include <iostream>
#include <vector>

std::vector<bool> sieve(int* numero)        //Funcion que devuelve un vector con true o false si el nuemro de la ubicacion es primo.
{
    std::vector<bool> vector(*numero);  //Se cre un vector con parametro.
    int cont{0};             //Variable para el contador de divisores.
    for (int i = 0; i < (*numero); i++) //Bucle para acceder a todos los datos del vector.
    {
        cont = 0 ;      //En cada ciclo el contador volvera a 0.
        for (int j = 1; j <= i; j++)    //Bucle apara acceder a todos los nuemroa anteriores a cada posicion.
        {
            if(i%j==0)  //Si el numero de la posicion es divisible por algunos de los anteriores a el y a el mismo
            {
                cont=cont+1;    //el contador aumenta.
            }
        }
        if (cont==2)    //Si alterminar el bucle el numero de la posicion llega a terner solo 2 divisores, es primo
        {
            vector[i]=true; //y se guarda con un true en el vector.
        }
        else        //Si no, 
        {
            vector[i]=false;        //se guarda con false la posicion con el vector.
        }
    }
    return vector;      //Al terminar co todas las posiciones enviamos un vector.
}

int main()      //Funcion principal.
{
    int numero{};       //Variable para el numero maximo
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;       //Se ingresa el valor.
    std::vector<bool> vector(numero);       //Se crea un vector por parametro.
    vector = sieve(&numero);        //Se extrae el vector por medio de la funcion al vector creado.
    //std::cout<<"\n2\n";
    for (int i = 0; i < vector.size(); i++)     //Bucle para acceder a los datos del vector.
    {
        std::cout<<vector[i]<<"-";  //Se imprime los valores del vector en dato bool.
    }
    
    return 0;
}
