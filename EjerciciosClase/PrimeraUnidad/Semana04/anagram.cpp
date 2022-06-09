/*
Dos palabras son anagramas si contienen las mismas
letras y el mismo número de cada letra. 
• Por ejemplo, stop es un anagrama de pots, Alan Smithee
es un anagrama de The alias men
• Escriba una función anagram que tome dos strings y
verifique si son anagramas entre sí.
*/

#include <iostream>
#include <string> 
#include <cstring>

int num_letras(std::string* palabra)        //Funcion que devuelve el numero de caracteres totales.
{
    int cont{0};        //Variable para el contador.
    for (int i = 0; i < (*palabra).size(); i++) //Bucle para ingresar a cada caracter de la palabra.
    {
        if ((*palabra)[i]!=' ') //Si se encuentra un caracter de espacio,se ignora la suma del contador.
        {
            cont=cont +1;
        } 
    }
    return cont;        //Retorna el contador.
}

int num_caracteres(std::string* palabra,char caracter)      //Funcion que devuelve el numero de caracteres repetitivos de un caracter.
{
    
    int cont{0};    //Variable para el contador
    for (int i = 0; i < (*palabra).size(); i++) //Bucle para estudiar cada caracter de la palabra. 
    {
        if ((*palabra)[i]==caracter)    //Si la palabra tiene el mismo caracter a estudiar.
        {
            cont++; //Si es asi,el contador aumenta.
        }  
    }
    return cont;    //Retorna el contador.
}


bool anagram(std::string* palabra1,std::string* palabra2)   //Funcion que verifica si las palabras son anagramas.
{
    if (num_letras(palabra1)==num_letras(palabra2)) //Si el numero de caracteres es igual en ambas palabras.
    {
        for (int i = 0; i < num_letras(palabra1); i++)  //Analisamos un caracter en palabra,
        {
            if (num_caracteres(palabra1,(*palabra1)[i])!=num_caracteres(palabra2,(*palabra1)[i]))//si el numero de un caracter especifico entre las dos palabras no es igual.
            {
                return false;   //Retorna falso
            } 
        }
        return true;    //Si al terminiar el bucle no hubi ningun error, se retorna true.
        
    }else
    {
        return false;   //Si el numero de caracteres de ambas palabras no son iguales, retorna false.
    }
    
}

int main()      //Funcion Principal.
{
    std::string palabra1,palabra2;  //Variables para las palabras.

    std::cout<<"Ingrese la primera palabra: ";
    getline(std::cin,palabra1);     //Se ingres la palabra1.
    std::cout<<"Ingrese la segunda palabra: ";
    getline(std::cin,palabra2);     //Se ingres la palabra2.

    if (anagram(&palabra1,&palabra2))   //Se analiza la funcion.
    {
        std::cout<<"-> Las palabras son anagramas?: TRUE";
    }else
    {
        std::cout<<"-> Las palabras son anagramas?: FALSE";
    }
    
    return 0;
}
