/*
Escriba una función arePrimeFactors que tome un número
entero n y un vector de números enteros, que devuelva true
si los números en el vector son todos primos y su producto
es n.
*/

#include <iostream>
#include <vector>
bool arePrimeFactors(int num, std::vector<int>* vector) //Funcion que retorna true o false si los numeros del vector
{                                                       // son primos y su producto es igual al numero.
    int cont{0},mult{1};
    for (int k = 0; k < (*vector).size(); k++)  //Bucle que ingresa a cada valor del vector.
    {
        cont=0;
        for (int i = 1; i <= (*vector)[k]; i++) //Bucle que cuenta todos los divisores de un numero.
        {
            if((*vector)[k]%i==0)   //Si el numero tiene un divisor con uno de sus numeros anteriores
            {
                cont=cont+1;    //se aumenta el numero de divisores.
            }   
        }
        if (cont==2)    //Si el numero tiene dos divisores, es primo
        {
            mult=mult*(*vector)[k]; //y se multiplica con otro numero de la lista que sea primo.
        }else   //Si no,
        {
            return false;   //devuelve false, proque no cumple lo pedido:que todos sean primos.
        }
        
    }
    if (mult==num)  //Si el producto de todos los numeros de la lista que son primos es igual al numero ingresado
    {
        return true;        //Se devuelve true.
    }else       //Si no,
    {
        return false;       //Se devuelve false.
    } 
}

int main()      //Funcion principal.
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

    if (arePrimeFactors(numero, &vector))   //Se hace la consulta a la funcnion arePrimeFactors.
    {
        std::cout<<"-> TRUE";//Si es true, se imprime true.
    }else
    {
        std::cout<<"-> FALSE";  ///Si es falso se impreme false.
    }
    
    return 0;
}
