#include "myprog.h"

int main(void) {

	DDRB |= (1 << PB0);
	DDRD &= ~(1 << PD2); 

	while (1) {
		if (PIND & (1 << PD2))
			PORTB &= ~(1 << PB0);
		else
			PORTB |= (1 << PB0);   

	}



	//page 65 et 72 : chaque PB correspond a un bit (0 ou 1)
	//page 61 : montre comment attribuer les valeurs des bits au byte PORTB
	


	return 0;
}



//checker DDRB, DDRC
