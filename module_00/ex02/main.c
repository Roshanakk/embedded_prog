#include "myprog.h"

int main(void) {

	DDRB |= (1 << PB0);
	DDRD &= ~(1 << PD2); 

	while (1) {
		if (PIND & (1 << PD2)) // si le bouton PD2 est HIGH cad non pressé
			PORTB &= ~(1 << PB0); // on éteint la LED PB0
		else
			PORTB |= (1 << PB0);   // on l'allume

	}


	//page 65 et 72 : chaque PB correspond a un bit (0 ou 1)
	//page 61 : montre comment attribuer les valeurs des bits au byte PORTB


}



// util/delay.h ???
