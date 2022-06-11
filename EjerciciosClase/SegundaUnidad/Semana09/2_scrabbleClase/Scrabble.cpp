#include "Scrabble.h"       //Incluimos codigo del archivo especificado.

Scrabble::Scrabble(std::string _name)           //Constructor.
{
    name = _name;
    this->generando_fichas_aleatorias();
}

void Scrabble::generando_fichas_aleatorias()            //Funcion para obtener las fichas de forma aleatoria.
{
    auto num_base = std::chrono::system_clock::now().time_since_epoch().count(); //devuelve el punto de tiempo como duración desde el inicio del reloj del systema
    std::mt19937 generador(num_base);    //utilizamos uno de los Generadores de números aleatorios predefinidos de Random. Y enviamos un numero base para generar otros a partir de ese.
    std::uniform_int_distribution<char>distrib('A','[');           // utilizamos uno de los Distribuciones uniformes de random para producir valores char distribuidos uniformemente en un rango.

    char letra_aleatorio{};

    for (int i = 0; i < 7; i++)
    {
        letra_aleatorio = distrib(generador);           //Se genera un valor char aleatorio para la ficha.
        Ficha *ficha;
        ficha = new Ficha(letra_aleatorio,letra_aleatorio);
    
        coleccion.push_back(ficha);
    }
    
    //y obtenemos el numero aleatorio de todo ello en un variable.

}

void Scrabble::imprimir(Ficha _ficha)           //Funcion para imprimir una sola ficha.
{
    _ficha.imprimir();
}

void Scrabble::mostrar_scrabble()           //Funcion para mostrar o imprimir todos los datos de un Scrabble.
{
    std::cout<<"\nScrabble :"<<this->name;
    std::cout<<"\nFichas:\n";
    for (int i = 0; i < 7; i++)
    {
        std::cout<<"\t->Ficha "<<i+1<<" :\n";
        this->imprimir(*(coleccion[i]));
    }  
}

Scrabble::~Scrabble()           //Destructor.
{
}