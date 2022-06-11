#include "Diamante.h"       //Se incluye codigo del archivo especificado.

Diamante::Diamante(char _size)          //Constructor.
{
    if (_size<91 && _size>64)           //Solo se aceptara letras de A-Z
    {
        cadena = "";        //Se incializa la cadena.
        caracter = _size;       //Se agrega el caracter.
        size = 0;
        for (int i = 65; i <=_size; i++)        //Se conbierte el codigo asccii en numeros enteros para el tamaño de la matriz-> A(65) = 1,J(10)=10
        {
            size++;
        }
        size = (size*2)-1;
        this->elaborar_diamante();      //Se manda a elaborar el diamante.
    }else           //Si el valor ingresado no es A-Z manda error y termina el programa.
    {
        std::cout<<"\n[ERROR][CARCATER INCORRECTO]\n";
        exit(-1);
    }   
}

void Diamante::elaborar_diamante()          //Funcion para elaborar el diamante.
{
    std::stringstream diamante{};       //Creamos un objeto stringstream.
    char cont_caracter{65};             //Variable auxiliar, para empezar con el caracter A 
    if (size == 1)              //Si la matriz es de tamaño 1*1 se imprime un unico caracter
    {
        diamante<<cont_caracter<<"\n";       //cont_caracter = 'A' 
        cadena = diamante.str();            //Se agrega ese valor a la cadena.
    }else                       //Si no es asi:
    {
        for (int i = 1, k=(size+1)/2,c=0; i <= size; i++)       //Bucle para filas.
        {
            //K es una referencia al numero de columna del medio: k es + para media columna superior y - para la inferior.
            //c es el numero de espacios que separa una letra de otra en una misma fila.
            if (k!=1)           //Si el numero de columna del medio de la matriz es diferente de 1, significa que estamos en proceso de una de las mitades de columanas
            {
                for (int j = 1; j <=size; j++)          //Bucle para columnas.
                {
                    if (k>0 && (j==k || j==k+c))        //Si estamos en la mitad superior , numero de columna y lugar adecuado
                    {
                        diamante<<" "<<cont_caracter;       //Se imprime el caracter de turno.
                    }else if (k<0 && (j==k*-1 || j==(k*-1)+c))      //Si estamos en la mitad inferior , numero de columna y lugar adecuado
                    {
                        diamante<<" "<<cont_caracter;       //Se imprime el caracter de turno.
                    }else                   //Si no:
                    {
                        diamante<<" *";         //Se imprime un *.
                    }
                }
                k--;        //Se disminuye el numero de columna que referencia al medio.
            }else       //Si el numero de columna del medio es 1, entonces llegamos a la fila del medio
            {
                for (int j = 1; j <=size; j++)
                {
                    if (j==1 || j==size)        //Se agrega el carcacter de turno al incio y al final de la fila.
                    {
                        diamante<<" "<<cont_caracter;
                    }else
                    {
                        diamante<<" *";
                    }
                }
                k=k*-2;     //Para no llegar a 0, se convierte k en negativo, y esto indica que entramos a la mitad de columnas inferiores.
            }
            diamante<<"\n";         //Al final de cada fila se agrega un salto de linea.
            if (k>0)            //Si estamos en la mitad de columas superiores.
            {
                cont_caracter++;        //Se cambia al siguiente caracter de turno .
                c=c+2;                  //Se aumenta el numero de espacios que seran los dos caracteres en una fila en relaciona numeros 2.
            }else           //Si estamos en la mitad de columas inferiores.
            {
                cont_caracter--;        //Se cambia al anterior caracter de turno .
                c=c-2;                  //Se disminuye el numero de espacios que seran los dos caracteres en una fila en relaciona numeros 2.
            }        
        }
        cadena = diamante.str();        ///Al final de todo lo ingresado al objeto stringstream se agrega ese contenido a la cadena.
    }
}

void Diamante::mostrar_diamante()           //Funcion para mostrar el diamante.
{
    std::cout<<cadena;      //se muestra la cadena.
}

Diamante::~Diamante()           //Destructor.
{

}
