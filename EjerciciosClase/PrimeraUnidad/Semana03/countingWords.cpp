/*
Ejercicio 4. contarPalabras.cpp
    • Escribir un programa que lea palabras y
    cuenta la frecuencia de cada palabra única.
    • Una palabra es una cadena de caracteres sin espacios separados por
    espacio en blanco
*/

#include <iostream>
#include <map>      //Libreria para los contenedores de palabras.
#include <string>

int main()          //Funcion principal.
{
    std::map<std::string,int> frecuencia{}; //Declaracion de una contenedor y su inicializacion.
    std::string palabras{};         //Variable string para el acceso de palabras
    std::cout<<"Ingrese una palabra: ";
    while (std::cin>>palabras)  //si se ingresa un valor(palabra) a la variable string 
    {
        ++frecuencia[palabras];     //Se busca ese valor en al llave de los contenedores y si no la hay crea uno nuevo.
        std::cout<<"-> Numero de frecuencias de '"<<palabras<<"': "<<frecuencia[palabras]<<std::endl;   //Se imprime las frecuencias.
        std::cout<<"Ingrese una palabra: ";//Y el ciclo continua.   
    }

    for (auto& t: frecuencia)   //  Iterando los datos del contenedores.Que imprime todos los contenedores.
    {
        std::cout<<t.first<<" -> "<<t.second<<std::endl;
    }

    return 0;
}

