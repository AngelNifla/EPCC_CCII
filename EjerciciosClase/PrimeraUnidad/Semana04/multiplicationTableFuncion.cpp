#include <iostream>

void mult(int* rango)       //Funcion para realizar e imprimir la tabla.
{
    for (int i = 1; i <=*rango; i++)    //Bucle para cada filas de tabla.
    {
        if(i>=10)   //cuando i mayor o igual que 10, regulamos el espacios de la primera columna 
        {
            std::cout<<"\n       "<<i<<"|";
        }else   //Si no, mantenemos el mismo espacio.
        {
            std::cout<<"\n\t"<<i<<"|";
        }
        for (int j = 1; j <= *rango; j++)       //Bucle para mostrar las multiplicaciones.
        {
            std::cout<<"\t"<<j*i;       //Imprimimos cada multiplicacion.
        }
    }
}

int main()      //Funcion principal.
{
    int rango{};    //Variable para almacenar el rango que introducira el usuarios.

    std::cout<<"ingrese un numero maximo para la tabal de multiplicar: ";
    std::cin>>rango;        //Se pide el rango.

    std::cout<<"\n\t*|";
    for (int i = 1; i <= rango; i++)   //Bucle para la primera fila(el nobre de las columnas).
    {
        std::cout<<"\t"<<i;
    }

    std::cout<<"\n";
    for (int i = 0; i < ((rango-1)*10); i++)    //Bucle para la fila de separación(separa la primera fila de las otras).
    {
        if(i == 9)      //Si en la posicion 9 del terminar es 9 se imprime el separador de columnas(separa la primera columna de las otras).
        {
            std::cout<<"|";
        }else   //Si no sigue con la separacion de las filas.
        {
            std::cout<<"-";
        }
    }

    mult(&rango);   //Se llama a la funcion que imprime los resultados de las multiplicaciones.

    return 0;
}