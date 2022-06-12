#include "Conjunto.h"           //Se incluye codigo del archivo especificado.

Conjunto::Conjunto(int _size)       //Constructor.
{
    size = _size;
    this->llenar_conjunto_fichas();
}

void Conjunto::llenar_conjunto_fichas()     //Funcion para ingresar y llenar las fichas domino.
{
    int val1{},val2{};          //Variables para los valores.
    Ficha *ficha;       //Puntero tipo Ficha, para crear nuevas Fichas.
    for (int i = 0; i < size; i++)
    {
        //Ficha *ficha;
        std::cout<<"Ingrese datos a la ficha "<<i+1<<":\n";
        std::cout<<"\tPrimer Valor:";
        std::cin>>val1;         ///Se ingresa valores.
        while (val1<1 || val1>6)            //Los valores en el domino son solo entre [1,6]
        {
            std::cout<<"-> [error][valor incorrecto, tiene que ser un valor entre [1,6]]";
            std::cin>>val1;         ///Se ingresa valores.
        }
        std::cout<<"\tSegundo Valor:";
        std::cin>>val2;         ///Se ingresa valores.
        while (val2<1 || val2>6)            //Los valores en el domino son solo entre [1,6]
        {
            std::cout<<"-> [error][valor incorrecto, tiene que ser un valor entre [1,6]]";
            std::cin>>val2;         ///Se ingresa valores.
        }
        ficha = new Ficha(val1,val2);
        dominos.push_back(ficha);       //Se ingresa la Ficha creada.
    }
    std::cout<<"-> Conjunto creado.\n";
}

bool Conjunto::contando_cifras()        //Funcion para contar cifras: Si el numero de repeticiones de todos los valore de los dominos es par, se puede ordenar.
{
    int cont{0};            //Variable contador.
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if((*(dominos[j])).get_valor1() == i )          //Se evalua si un digito [1,6] se repite en cada domino(en los dos valores del domino).
            {
                cont++;
            }else if((*(dominos[j])).get_valor2() == i )            //Se evalua si un digito [1,6] se repite en cada domino(en los dos valores del domino).
            {
                cont++;
            }
        }
        if (cont%2!=0)          //Si las repeticiones de un valor no es par, se retorna falso.
        {
            return false;
        }else
        {
            cont=0;
        }
    }
    return true;
}

void Conjunto::calculando_ordenamiento()        //Funcion para calcular el ordenamiento de dominos.
{
    if (!contando_cifras() && size!=1)          //Se consulta si las repeticiones totales de los valores de todos los dominos son pares,sino corta la funcion.
    {
        std::cout<<"\n-> No se puede ordenar el conjunto de dominos.\n";
        return;
    }
    std::cout<<"\n-> Si se puede ordenar el conjunto de dominos.\n";
    if (dominos.size()==1)          //Si se ingresó un solo domino, se agrega al ordenamiento y se corta la funcion.
    {
        ordenamiento.push_back(*(dominos[0]));
        return;
    }

    //Si no, se creara un vector sauxiliar que se modificara por bucles buscando el orden correcto y a la vez eliminando fichas para un amyor aceleramiento.

    std::vector<Ficha*> aux;
    aux = dominos;
    int inicio{aux[0]->get_valor2()};       //Se parte de la ficha 1. El valor 2 tiene que ser identico con alguno de los valores de los otros dominos.
    ordenamiento.push_back(*(aux[0]));      //Se agrega la primera ficha al ordenamiento.
    int aux_cambio;     //Variable para intercambiar valores en un domino(porque un domino real puede girar en 360°).
    while (aux.size()!=1)       //Mientras el tamaño del vector auxiliar no sea de uno(porque tienen que eliminarce todos los otros dominos en el ordenamiento).
    {
        for (int i = 1; i < aux.size(); i++)
        {
            if (aux[i]->get_valor1() == inicio)     //Si se encuentra el mismo valor en el valor 1.
            {
                ordenamiento.push_back(*(aux[i]));      //Se agrega esa ficha seguida de la anterior.
                inicio = aux[i]->get_valor2();      //Se cambia el valor ed incio para la nueva busqueda.
                aux.erase(aux.begin()+i);           //Se elimina la ficha del vector auxiliar.
                break;                  //Se corta el bucle.
            }else if (aux[i]->get_valor2() == inicio)       //Pero si se encuentra el mismo valor en el valor 2 de algun domino.
            {
                aux_cambio = aux[i]->get_valor1();          //Se intercambia los valores del domino.
                aux[i]->set_valor1(aux[i]->get_valor2());           //Se intercambia los valores del domino.
                aux[i]->set_valor2(aux_cambio);         //Se intercambia los valores del domino.
                ordenamiento.push_back(*(aux[i]));      //Y sigue el mismo proceso quie el anterior condicional. Y asi hasta terminar con todos los dominos.
                inicio = aux[i]->get_valor2();
                aux.erase(aux.begin()+i);
                break;
            }
        }
    }
  
}

void Conjunto::mostrar_ordenamiento()       //Funcion para mostrar solo el ordenamiento.
{
    if (!contando_cifras() && size!=1)
    {
        return;
    }
    std::cout<<"\n---------------------------------------------------";    
    std::cout<<"\nUno de los ordenamientos de dominos es el siguiente:\n\t-> ";
    for (int i = 0; i < ordenamiento.size(); i++)
    {
        ordenamiento[i].imprimir();
    }
    
}

void Conjunto::mostrar_conjunto()       //Funcion para mostrar solo el conjunto inicial.
{
    std::cout<<"\n---------------------------------------------------";
    std::cout<<"\nMostrando el conjunto de dominos ingresado:\n\t-> ";
    for (int i = 0; i < size; i++)
    {
        (*(dominos[i])).imprimir();
    }
}

Conjunto::~Conjunto()       //Destructor.
{
}

