#include "myprog.h"
#include "util/delay.h"

int main(void) {

	DDRB |= (1 << PB0); // on met PB0 en output
	DDRD &= ~(1 << PD2); // on met PD2 en input

	uint8_t prev_pind = 0xFF;


	while (1) {

		_delay_ms(10);

		uint8_t change = prev_pind ^ PIND;
		int pd2_changed = change & (1 << PD2);

		prev_pind = PIND;

		if (pd2_changed && (PORTB & (1 << PB0)))
			PORTB &= ~(1 << PB0); // on éteint la LED PB0
		else if (pd2_changed)
			PORTB |= (1 << PB0);   // on l'allume
		

	}



	return 0;
}

