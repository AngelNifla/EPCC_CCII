/*
• Escriba un programa que convierta un número total de segundos a horas, minutos y segundos.
• Debe (1) pedirle al usuario que ingrese,
    (2) leer un número entero del teclado,
    (3) calcular el resultado, y
    (4) use std::cout para mostrar la salida.
        Ingrese el número de segundos para convertir: 5000
            5000 segundos = 1 hora, 23 minutos y 20 segundos
*/

# include <iostream>

using namespace std;

int main()
{
    int num_segundos;   //Variable para el numero de segundos.
    int horas = 0, minutos = 0, segundos = 0;   //Variables para el horario, minutero y segundero.
    
    cout<<"Ingrese el numero de segundos : ";
    cin>>num_segundos;  //Ingresamos el numero de segundos.
    while (num_segundos<0)      //Bucle hasta ingresar solamente segundos positivios.
    {
        cout<<"Ingrese el numero POSITIVO de segundos : ";
        cin>>num_segundos;
    }
    
    for (int i = 0; i < num_segundos; i++)  //Bucle para sumar el segundero.
    {
        segundos++;         //En cada ciclo el segundero aumenta en uno.
        if(segundos==60)       //Si el segundero llega a 60
        {
            minutos++;         //se aumenta uno al minutero
            segundos=0;        //y el segundero vuelve a 0.
        }else if (minutos==60)      //Si el minutero llega a 60,
        {
            horas++;                //se aumenta uno al horario
            minutos=0;              //y el minutero vuelve a 0.
        }
    }

    cout<<"-> "<<num_segundos<<" segundos son a : ";    //Se imprime la equivalencia de segundos.
    cout<<horas<<" horas, "<<minutos<<" minutos con "<<segundos<<" segundos.";

    return 0;
}