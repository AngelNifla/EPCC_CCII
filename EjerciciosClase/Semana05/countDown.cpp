/*
Modifique el programa countDown para imprimir los
números en forma ascendente
*/

#include <iostream>

void countDown(int n)      //Funcion que retorna a si misma(recursiva).
{
    if (n == 0)    //Si el parametro es 0, 
    {
        std::cout<<"Blastoff!\n";   //se imprime
    }else   //Si el parametro es diferente de 0,
    {
        countDown(n-1);        //La funcion se llama a si misma restando el parametro en 1
        std::cout<<n<<'\n';        //Y se imprime el valor.
    } 
}

int main()      //Funcion principal.
{
    int n{NULL};        //Variable para un numero int.
    std::cout<<"Ingrese un numero: ";
    std::cin>>n;        //Se introduce valor a la varibale general.
    countDown(n);       //Se llama a la funcion enviando como parametro el valor de n.
    return 0;
}