#include "mbed.h"
#include "arm_book_lib.h"

int main()
{   
    DigitalIn gasDetector(D4); //instancio el objeto "gasDetector" de la Clase publica "DigitalIn" con la SOBRECARGA del CONSTRUCTOR que toma un parametro
                               //Se modifico el pin D2 de la placa por el D4.
    
    DigitalOut alarmLed(LED1); //instancio el objeto "alarmLed" de la Clase publica "DigitalOut" con la SOBRECARGA del CONSTRUCTOR que toma un parametro

    gasDetector.mode(PullDown);// Se establece el modo de pin a traves del metodo mode de la clase DigitalIn

    alarmLed = OFF; //Se inicializa la variable alarmLed
printf("Hola Mundo\n"); // Se imprime el mensaje "Hola Mundo" por consola.
    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}
