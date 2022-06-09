/*
Reescriba el ejercicio del conteo de palabras. Imprima las
palabras en forma alineada.
    – Escriba una función que encuentre la palabra más grande. 
    – Una función para limpiar caracteres que no sean
    alfabéticos.
*/

#include <iostream>
#include <map>      //Libreria para los contenedores de palabras.
#include <string>

void limpiar_palabras(std::string *palabra)     //Funcion que corrige las palabras antes de ingresarce al contenedor.
{
    char alf[]={'a','b','c','d','e','f','g','h','i','j',    //Letras de abecedario, en minusculas y mayusculas.
    'k','l','m','n','o','p','q','r','s','t','u','v','w',
    'x','y','z','A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T','U','V','W',
    'X','Y','Z'};

    int cont{0};        //Vatiable para el contador.

    for (int i = 0; i < (*palabra).size(); i++) //Bucle para acceder a lsod atos de la palabra.
    {
        cont = 0;       //En cada cilo en contador vuelve a 0.
        for (int j = 0; j < 52; j++)            //Bucle para acceder a todos los caracteres del abecedario.
        {
            if ((*palabra)[i] == alf[j])    //Si un caracter es igual a uno del alfabeto
            {
                cont++;     //El contador aumenta en 1.
            }
        }

        if (cont==0)    //Si al terminar el bucle el cont sigue en 0, significa que el caracter actual no es un caracter del alfabeto
        {
            (*palabra).erase((*palabra).begin()+i);//entonces procedemos a eliminarlo
            i--;                                //y dismonuimos en 1 a i del bucle.
        }  
    }
}

std::string palabra_grande(std::map<std::string,int>* contenedor)       //Funcion que busca la palabra mas grande ya ingresada.
{
    int num_palabras{0};        //Variable para almacenar el numero de caracteres mas grande de un palabra en el contenedor.
    std::string palabra{};      //Variable para obtener la palbra mas grande.
    for (auto& t: *contenedor)   //  Bucle Iterando los datos del contenedores.
    {
        if (t.first.size()>=num_palabras)       //Si la la palabra del contenerdor tiene un tamaño mas grande que uno anterior
        {
            palabra = t.first;      //Se guarda en la palabra
            num_palabras =t.first.size();       //y se guarda el tamaño.
        }
    }
    return palabra; //Al terminar el bucle retornaremos la palbra mas grande guardada.
}

int main()          //Funcion principal.
{
    std::map<std::string,int> frecuencia{}; //Declaracion de una contenedor y su inicializacion.
    std::string palabras{};         //Variable string para ingresar las palbras.
    std::cout<<"Ingrese una palabra: ";
    std::cin>>palabras;     //Se ingresa la palabra.
    while (palabras!="NULL")  //Hasta que se ingrese la palabra NULL el bucle seguira pidiendo mas palbras
    {
        limpiar_palabras(&palabras);        //Limpiamos la palabra ingresada.Luego
        ++frecuencia[palabras];     //se busca ese valor en al llave de los contenedores y si no la hay crea uno nuevo.Si existe la frecuencia aumenta.
        std::cout<<"Ingrese una palabra: ";//Y el ciclo continua pidiendo otra palabra.
        std::cin>>palabras;
    }

    for (auto& t: frecuencia)   //  Iterando los datos del contenedores.
    {
        std::cout<<t.first<<" -> "<<t.second<<std::endl;    //Se imprime las frecuencias.
    }

    std::cout<<"La palabra mas grande es: "<<palabra_grande(&frecuencia)<<std::endl;        //Se imprime la palabra mas grande.
    return 0;
}