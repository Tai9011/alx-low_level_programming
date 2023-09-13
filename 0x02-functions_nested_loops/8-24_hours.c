#include "main.h"
/**
 *
 *
 *
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		minute = 0;
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour + 48);
			_putchar(':');
			_putchar(minute + 48);
		}
	}
}
