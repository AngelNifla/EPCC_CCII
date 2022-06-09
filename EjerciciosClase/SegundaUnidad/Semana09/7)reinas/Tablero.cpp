#include "Tablero.h"        //Se incluye codigo del archivo especificado.

Tablero::Tablero(std::string nombre)                //Constructor.
{
    std::vector<std::vector<char>> new_matriz(8,std::vector<char> (8,'_'));
    matriz = new_matriz;        //Se agrega la matriz.
}

void Tablero::agregar_piezas()              //Funcion para agregar piezas de objeto reina a los punteros.
{
    std::cout<<"-> Agregando piezas\n\n";
    std::cout<<"-> Creando Primera Reina\n";
    R1 = new Reina;     //Se agrega los objetos a los punteros.
    std::cout<<"-> Creando Segunda Reina\n";
    R2 = new Reina;     //Se agrega los objetos a los punteros.
    while (R1->get_posicion_c()==R2->get_posicion_c() && R1->get_posicion_f()==R2->get_posicion_f())
    {
        std::cout<<"-> [ALERTA]: Las reinas tienen la misma posicion\n";
        this->cambiar_posicion_fichas();
    }
    matriz[(R1->get_posicion_f())-1][(R1->get_posicion_c())-1] = R1->get_nombre();      //Se agrega el nombre del objeto en el tablero segun las las posiciones en la matriz.
    matriz[(R2->get_posicion_f())-1][(R2->get_posicion_c())-1] = R2->get_nombre();      //Se agrega el nombre del objeto en el tablero segun las las posiciones en la matriz.
}

bool Tablero::verificar_ataque()                //Funcion para verificar si existe ataque entre las piezas.
{
    std::cout<<"-> Verificando Ataque\n\n";
    if (R1->get_posicion_c() == R2->get_posicion_c())               //Si las columnas son iguales en ambos objetos si pueden atacarce.
    {
        return true;
    }else if (R1->get_posicion_f() == R2->get_posicion_f())         //Si las filas son iguales en ambos objetos si pueden atacarce.
    {
        return true;
    }else if ((R1->get_posicion_f())-(R1->get_posicion_c())==(R2->get_posicion_f())-(R2->get_posicion_c()))//Si la resta de posiciones (f-c)de un mismo objeto son iguales entre ambos, significa que si pueden atacarce.
    {
        return true;
    }else if ((R1->get_posicion_f())+(R1->get_posicion_c())==(R2->get_posicion_f())+(R2->get_posicion_c()))//Si la suma de posiciones (f+c)de un mismo objeto son iguales entre ambos, significa que si pueden atacarce.
    {
        return true;
    }else               //Si no cumple cualquiera de las condiciones anteriores ,significa que no pueden atacarce.
    {
        return false;
    }
}

void Tablero::mostrar_tablero()             //Funcion para mostrar el tablero.
{
    std::cout<<"-> Mostrando Tablero\n\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout<<"\t";
        for (int j = 0; j < 8; j++)
        {
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

void Tablero::cambiar_posicion_fichas()             //Funcion para cambiar posicion de las piezas.
{
    int opcion{};
    std::cout<<"-> Cambiando posicion de ficha.\n";
    std::cout<<"\t1)Cambiar posicion Reina 1 con nombre: "<<R1->get_nombre()<<".\n";
    std::cout<<"\t2)Cambiar posicion Reina 2 con nombre: "<<R2->get_nombre()<<".\n";
    std::cout<<"\nIngrese opcion: ";
    std::cin>>opcion;
    while (opcion<1 || opcion>2)
    {
        std::cout<<"-> [ALERTA]: Opcion incorrecta o no existe";
        std::cout<<"-> Ingrese de nuevo: ";
        std::cin>>opcion;
    }
    if (opcion ==1)                 //Cambiando las posiciones de el objeto 1.
    {
        matriz[(R1->get_posicion_f())-1][(R1->get_posicion_c())-1] = '_';//Borramos el nombre del objeto en la posicion actual de la matriz.
        R1->agregar_posicion();
        matriz[(R1->get_posicion_f())-1][(R1->get_posicion_c())-1] = R1->get_nombre();//Agregamos el nombre del objeto en la posicion nueva de la matriz.
    }else                   //Cambiando las posiciones de el objeto 2.
    {
        matriz[(R2->get_posicion_f())-1][(R2->get_posicion_c())-1] = '_';//Borramos el nombre del objeto en la posicion actual de la matriz.
        R2->agregar_posicion();
        matriz[(R2->get_posicion_f())-1][(R2->get_posicion_c())-1] = R2->get_nombre();//Agregamos el nombre del objeto en la posicion nueva de la matriz.
    }
}

void Tablero::pueden_atacarce()             //Funcion para imprime si el ataque existe.
{
    std::cout<<"-> Pueden atacarce?\n\n";
    if (verificar_ataque())         //Si la funcion devuelve true, se imprime que si.
    {
        std::cout<<"\tRpta -> SI,las piezas puden atacarce uno al otro\n";
    }else           //Si la funcion devuelve false, se imprime que no.
    {
        std::cout<<"\tRpta -> NO,las piezas no puden atacarce uno al otro\n";
    }
}

Tablero::~Tablero()             //Destructor.
{
}