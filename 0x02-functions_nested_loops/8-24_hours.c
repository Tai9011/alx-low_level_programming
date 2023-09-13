#include "main.h"
/**
 * jack_bauer - prints time
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
