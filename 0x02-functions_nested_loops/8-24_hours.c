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
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
