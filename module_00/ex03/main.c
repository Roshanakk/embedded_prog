#include "myprog.h"


int main(void) {

	DDRB |= (1 << PB0); // on met PB0 en output
	DDRD &= ~(1 << PD2); // on met PD2 en input

	uint8_t prev_pind = 0xFF;

	while (1) {

		_delay_ms(10);

		uint8_t change = prev_pind ^ PIND; // on cree un byte, les bits changes sont a 1
		int pd2_changed_and_low = ~PIND & (change & (1 << PD2)); // booleen qui est 1 si le bit PD2 a change et qu'il est presse (ne l'etait pas avant)

		prev_pind = PIND; //PIND historique

		if (pd2_changed_and_low && (PORTB & (1 << PB0)))
			PORTB &= ~(1 << PB0); // on éteint la LED PB0
		else if (pd2_changed_and_low)
			PORTB |= (1 << PB0);   // on l'allume

	}

}

