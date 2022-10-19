
#include "header.h"

int main(void)
{
	setup();
	
	while (1)
	{
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED) //Om BUTTON1 är nedtryckt, så ska lamporna blinka framåt.
		{
			leds_blink_forward(100);
		}
		
		else if (!BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED) //Om BUTTON2 är nedtryckt, så ska lamporna blinka bakåt.
		{
			leds_blink_backward(100);
		}
		
		else if (ALLBUTTONS_ARE_PRESSED) //Om BUTTON1 & BUTTON2 är nedtryckt, så ska lamporna lysa.
		{
			leds_on();
		}
		
		else
		{
			leds_off();
		}
	}

	return 0;
}

