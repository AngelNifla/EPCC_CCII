/*
• Escribir un programa que convierta una temperatura de Celsius a Fahrenheit.
• Debería 
    (1) pedirle al usuario que ingrese,
    (2) leer un doble valor del teclado,
    (3) calcular el resultado, y
    (4) formatee la salida a un lugar decimal. 
    
    Cuando haya terminado, debería funcionar así:

    Introduzca una temperatura en Celsius: 24
    24,0 C = 75,2 F

• Fórmula para hacer la conversión:

    F = C * 9 / 5 + 32
*/

#include <iostream>

using namespace std;

int main()
{
    double Celsius, Farengeit;          //Variables para la temperatura en C y F

    cout<<"Introducir la temperatura en Celsius : ";
    cin>>Celsius;                   //Se introduce la temperatura.

    Farengeit=Celsius*9/5+32;       //Utilizamos la formula para convertir C a F.

    cout<<"-> "<<Celsius<<" grados Celsius es a : "<<Farengeit<<" grados Farengeit";    //Imprimimos la convercion.

    return 0;
}