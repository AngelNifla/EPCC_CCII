/*////////////////////////////////////ENUNCIADO////////////////////////////////////
Dada la posición de dos reinas en un tablero de ajedrez, indicar si están o no
colocadas de modo que puedan atacarse entre sí.
En el juego de ajedrez, una reina puede atacar piezas que están en la misma
fila, columna o diagonal.
Un tablero de ajedrez se puede representar mediante una matriz de 8 por 8.
Utilice vector de vectores para implementar la matriz.
Entonces, si le dicen que la reina blanca está en (2, 3) y la reina negra en (5,
6), entonces sabrá que tiene una configuración como esta:
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ B _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ N _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
Debe responder si las reinas pueden atacarse entre sí. En este ejemplo, la
respuesta es sí, porque ambas piezas comparten una diagonal.
*/

/*///////////////////////////////////CODIGO///////////////////////////////////*/

#include "Tablero.h"        //Se incluye codigo del archivo especificado.

int main()          //Funcion principal.
{
    int opcion{0};      //Variable: para las opciones.
    std::string nombre{};
    std::cout<<"Ingresar nombre del tablero: ";
    std::cin>>nombre;
    Tablero T(nombre);          //Se crea un tablero.
    std::cout<<"\n-> Tablero Creado"<<T.get_nombre()<<"\n\n";
    
    while (true)
    {
        std::cout<<"----------------------INCIO----------------------\n";
        std::cout<<"\t1)Agregar Piezas\n";
        std::cout<<"\t2)Mostrar Tablero\n";
        std::cout<<"\t3)Terminar\n";
        std::cout<<"Ingrese de opcion: ";
        std::cin>>opcion;
        while (opcion<1 || opcion>3)
        {
            std::cout<<"-------------------------------------------\n";
            std::cout<<"-> [ALERTA]: Opcion incorrecta o no existe";
            std::cout<<"-> Ingrese de nuevo: ";
            std::cin>>opcion;
        }
        if (opcion == 1)            //Opcion que agrega las Piezas.
        {
            std::cout<<"----------------------AGREGANDO PIESAS---------------------\n";
            T.agregar_piezas();
            std::cout<<"\n-> Piezas agregadas.\n\n";
            while (true)
            {
                std::cout<<"---------------------MENU----------------------\n";
                T.mostrar_tablero();
                std::cout<<"\t1)Cambiar posicion de fichas\n";
                std::cout<<"\t2)Verificar ataque\n";
                std::cout<<"\t3)Terminar\n\n";
                std::cout<<"Ingrese de opcion: ";
                std::cin>>opcion;
                while (opcion<1 || opcion>3)
                {
                    std::cout<<"-> [ALERTA]: Opcion incorrecta o no existe";
                    std::cout<<"-> Ingrese de nuevo: ";
                    std::cin>>opcion;
                }
                if (opcion==1)              //Opcion que cambia la posicion de las fichas.
                {
                    std::cout<<"-------------------------------------------\n";
                    T.cambiar_posicion_fichas();
                    std::cout<<"\n-> Posicion Cambiada\n\n";
                }else if (opcion == 2)              //Opcion que erifica si el ataque existe.
                {
                    std::cout<<"-------------------------------------------\n";
                    T.pueden_atacarce();
                }else if (opcion==3)                //Opcion que Termina el programa.
                {
                    exit(-1);
                }    
            }
            
        }else if(opcion == 2)           //Opcion que muestra el Tablero.
        {
            std::cout<<"-------------------------------------------\n";
            T.mostrar_tablero();
        }else if (opcion==3)            //Opcion que Terminar el programa.
        {
            break;
        } 
    }

    return 0;
}

/*////////////////////////////////EJECUCION////////////////////////////////

PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\reinas> .\\a
Ingresar nombre del tablero: Reto

-> Tablero Creado

----------------------INCIO----------------------
        1)Agregar Piezas
        2)Mostrar Tablero
        3)Terminar
Ingrese de opcion: 2
-------------------------------------------      
-> Mostrando Tablero
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 

----------------------INCIO----------------------
        1)Agregar Piezas
        2)Mostrar Tablero
        3)Terminar
Ingrese de opcion: 1
----------------------AGREGANDO PIESAS---------------------
-> Agregando piezas

-> Creando Primera Reina
        Ingresar nombre de la Reina: N
        Ingresar posicion de fila: 1
        Ingresar posicion de columna: 1
-> Creando Segunda Reina
        Ingresar nombre de la Reina: B 
        Ingresar posicion de fila: 2
        Ingresar posicion de columna: 2

-> Piezas agregadas.

---------------------MENU----------------------
-> Mostrando Tablero

        N _ _ _ _ _ _ _
        _ B _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 2
-------------------------------------------
-> Pueden atacarce?

-> Verificando Ataque

        Rpta -> SI,las piezas puden atacarce uno al otro
---------------------MENU----------------------
-> Mostrando Tablero

        N _ _ _ _ _ _ _
        _ B _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 1
-------------------------------------------
-> Cambiando posicion de ficha.
        1)Cambiar posicion Reina 1 con nombre: N.
        2)Cambiar posicion Reina 2 con nombre: B.

Ingrese opcion: 2
        Ingresar posicion de fila: 3
        Ingresar posicion de columna: 4

-> Posicion Cambiada

---------------------MENU----------------------
-> Mostrando Tablero

        N _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _ 

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 2
-------------------------------------------
-> Pueden atacarce?

-> Verificando Ataque

        Rpta -> NO,las piezas no puden atacarce uno al otro
---------------------MENU----------------------
-> Mostrando Tablero

        N _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 1
-------------------------------------------
-> Cambiando posicion de ficha.
        1)Cambiar posicion Reina 1 con nombre: N.
        2)Cambiar posicion Reina 2 con nombre: B.

Ingrese opcion: 1
        Ingresar posicion de fila: 6
        Ingresar posicion de columna: 7

-> Posicion Cambiada

---------------------MENU----------------------
-> Mostrando Tablero

        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ N _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 2
-------------------------------------------
-> Pueden atacarce?

-> Verificando Ataque

        Rpta -> SI,las piezas puden atacarce uno al otro
---------------------MENU----------------------
-> Mostrando Tablero

        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _
        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ N _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _ 

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 1
-------------------------------------------
-> Cambiando posicion de ficha.
        1)Cambiar posicion Reina 1 con nombre: N.
        2)Cambiar posicion Reina 2 con nombre: B.

Ingrese opcion: 1
        Ingresar posicion de fila: 6
        Ingresar posicion de columna: 4

-> Posicion Cambiada

---------------------MENU----------------------
-> Mostrando Tablero

        _ _ _ _ _ _ _ _ 
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ N _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _ 

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 2
-------------------------------------------
-> Pueden atacarce?

-> Verificando Ataque

        Rpta -> SI,las piezas puden atacarce uno al otro
---------------------MENU----------------------
-> Mostrando Tablero
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ B _ _ _ _ 
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ N _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _ 

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 1
-------------------------------------------
-> Cambiando posicion de ficha.
        1)Cambiar posicion Reina 1 con nombre: N.
        2)Cambiar posicion Reina 2 con nombre: B.

Ingrese opcion: 2
        Ingresar posicion de fila: 6
        Ingresar posicion de columna: 8

-> Posicion Cambiada

---------------------MENU----------------------
-> Mostrando Tablero
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ N _ _ _ B 
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 2
-------------------------------------------
-> Pueden atacarce?
-> Verificando Ataque

        Rpta -> SI,las piezas puden atacarce uno al otro
---------------------MENU----------------------
-> Mostrando Tablero
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _
        _ _ _ N _ _ _ B 
        _ _ _ _ _ _ _ _
        _ _ _ _ _ _ _ _

        1)Cambiar posicion de fichas
        2)Verificar ataque
        3)Terminar

Ingrese de opcion: 3
PS E:\C++\2022\EPCC_CCII\EjerciciosClase\Unidad_II\Semana09\reinas> 
*/