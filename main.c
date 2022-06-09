
	
#define F_CPU 8000000
#include <avr/io.h>

int main()
{
	DDRB |=(1<<PB0)|(1<<PB1);
	
	PLLCSR |= (1 << PLLE) | (1 << PCKE);
	TCCR1 = 1<<PWM1A | 0<<COM1A1 | 1<<COM1A0 | 0<<CS13 | 1<<CS12 | 0<<CS11 | 1<<CS10;
	GTCCR = 0<<PWM1B | 0<<COM1B1 | 0<<COM1B0;
	OCR1C = 164;
	OCR1A = 55;  
	

	while (1)
	{
		
	}

	return 0;
}