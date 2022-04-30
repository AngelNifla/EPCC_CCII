/*
• El objetivo de este ejercicio es programar un juego Guess My Number.
  Cuando haya terminado, debería funcionar así:

    Estoy pensando en un número entre 1 y 100 (incluyendo ambos). ¿Puedes adivinar qué es?
    Escriba un número: 45
    Tu conjetura es: 45
    El número en el que estaba pensando es: 14
    Te fuiste por: 31

• Para elegir un número aleatorio, utilice la biblioteca aleatoria de C++ <random> https://en.cppreference.com/w/cpp/numeric/random
*/

/*
Indepednientemente eh utilizado la libreria <chrono> para ontener el numero base(el que sera el timepo del systema)
https://en.cppreference.com/w/cpp/chrono
*/

#include <iostream>
#include <random>       //Inclusion de la libreria random.
#include <chrono>       //Inclusion de la libreria chrono, para que el numero aleatorio sea diferente en cada ejecucion del programa.

using namespace std;

int main()
{
    int num_usuario;    //Variable para el numero que ingresara el usuario.

    cout<<"Programa: Estoy pensando en un numero entre 1 y 100 (incluyendo ambos). Puedes adivinar que es?\n";
    cout<<"Tu: Escriba un numero:  ";
    cin>>num_usuario;       //  El usuario ingresa el numero.
    while (num_usuario<1 || num_usuario>100)    //Bucle para que el usuario ingrese solamente numeros entre [1,100].
    {
        cout<<"\tPrograma: -> NO, ese numero no esta entre el 1 y 100 (incluyendo ambos):\n";
        cout<<"\tTu: Escriba nuevamente un numero:  ";
        cin>>num_usuario;   //  Si el usuario no ingresa el numero del rango, vuelve a ingresa otro numero.
    }

    cout<<"Programa: Tu crees que es "<<num_usuario<<""<<" ?\n";
    
    auto num_base = chrono::system_clock::now().time_since_epoch().count(); //devuelve el punto de tiempo como duración desde el inicio del reloj del systema
    mt19937 generador(num_base);    //utilizamos uno de los Generadores de números aleatorios predefinidos de Random. Y enviamos un numero base para generar otros a partir de ese.
    //default_random_engine generador(num_base);     /*Otro Generador de números aleatorios predefinidos*/
    uniform_int_distribution<int>distrib(1,100);// utilizamos uno de los Distribuciones uniformes de random para producir valores enteros distribuidos uniformemente en un rango
    int num_aleatorio=distrib(generador);//y obtenemos el numero aleatorio de todo ello en un variable.

    cout<<"Programa: El numero en el que estaba pensando es: "<<num_aleatorio<<endl;
    cout<<"Programa: Asi que...\n";

    if(num_aleatorio==num_usuario)  //Si el numeroa leatorio es igual al que el usuario ingreso
    {
        cout<<"-> Programa:  ADIVINASTE!";    //gana el juego.
    }else if(num_aleatorio-num_usuario<0)   //Si el numero alatorio es diferente al que el usuario ingreso, pierde el juego
    {
        cout<<"-> Programa: Te fuiste por: "<<num_usuario-num_aleatorio;//y se regresa lo que se paso
    }else
    {
        cout<<"-> Programa: Te falto : "<<num_aleatorio-num_usuario;//o lo que le falto.
    }
    
    return 0;
}