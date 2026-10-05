#include "myprog.h"

int main(void) {

    while (1) {
        PORTB |= (1 << PB0);   
    }


    //page 65 et 72 : chaque PB correspond a un bit (0 ou 1)
    //page 61 : montre comment attribuer les valeurs des bits au byte PORTB
    


    return 0;
}



//checker DDRB, DDRC
