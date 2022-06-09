/*
Escriba una función letterHist que tome un string como
parámetro y devuelva un histograma de las letras del string. 
• El elemento cero del histograma debe contener el número
    de aes (plural de a) en el string (mayúsculas y minúsculas)
• El elemento 25 debe contener el numero de zetas.
• Solo recorra el string una vez.
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<int> letterHist(std::string* palabra)        //Funcion que devuelve un vector con la frecuencia de los caracteres de la cadena.
{
    char alf[]={'a','b','c','d','e','f','g','h','i','j',        //array de caracteres del alfabeto.
    'k','l','m','n','o','p','q','r','s','t','u','v','w',
    'x','y','z'};
    char alfM[]={'A','B','C','D','E','F','G','H','I','J',       //array de caracteres del alfabeto.
    'K','L','M','N','O','P','Q','R','S','T','U','V','W',
    'X','Y','Z'};
    std::vector<int> vector(26);  //Se cre un vector con parametro.
    int cont{0};             //Variable para el contador de repeticiones.
    for (int i = 0; i < (*palabra).size(); i++) //Bucle para acceder a todos los carcateres de la palabra.
    {
        for (int j = 0; j < 26; j++)    //Bucle para ingresar a lso datos de los array de alfabetos.
        {
            cont = 0 ;      //En cada ciclo el contador volvera a 0.
            if ((*palabra)[i]==alf[j] || (*palabra)[i]==alfM[j])    //Si un carcater de la palbra es igaul a un caracter del alfabeto en minuscula o mayuscula
            {
                cont=cont+1;        //EL CONTADOR AUMENTA EN 1.
            }
            vector[j]=vector[j]+cont;       //y se agrega ese valor del contador 0 o 1 a la posicion del vector segun el caracter encontrado repetitivo.
        }
    }
    return vector;      //Al terminar con todas las posiciones enviamos un vector.
}

int main()
{
    std::string palabra{};       //Variable para la palabra en cadena
    std::cout<<"Ingrese una palabra: ";
    getline(std::cin,palabra);       //Se ingresa la cadena.
    std::vector<int> vector(26);       //Se crea un vector por parametro.
    vector = letterHist(&palabra);        //Se extrae el vector por medio de la funcion al vector creado en la funcion.
    //std::cout<<"\n2\n";
    for (int i = 0; i < vector.size(); i++)     //Bucle para acceder a los datos del vector.
    {
        std::cout<<vector[i]<<"-";  //Se imprime los valores del vector, mostrando la frecuencia de cada letra del abecedario.
    }
    return 0;
}
