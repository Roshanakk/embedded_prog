#include "myprog.h"

int main(void) {

	DDRB |= (1 << PB0); // on met PB0 en output
	DDRD &= ~(1 << PD2); // on met PD2 en input

	unsigned char prev_pind = PIND;


	while (1) {
		if ((prev_pind & (1 << PD2)) == (PIND & (1 << PD2)))
			PORTB &= ~(1 << PB0); // on éteint la LED PB0
		else if ((prev_pind & (0 << PD2)) == (PIND & (0 << PD2)))
			PORTB |= (1 << PB0);   // on l'allume
		
		prev_pind = PIND;

	}



	//page 65 et 72 : chaque PB correspond a un bit (0 ou 1)
	//page 61 : montre comment attribuer les valeurs des bits au byte PORTB
	


	return 0;
}



// util/delay.h ???


