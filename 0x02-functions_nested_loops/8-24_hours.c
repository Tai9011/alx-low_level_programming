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
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
		}
	}
}
/*
 * int srt[]="00:56"
 * if (minute < 10)
 * {
 * 	if (hour < 10)
 * 	{
 * 	 _putchar(0);
 * 	_putchar(hour);
 * 	_putchar(':');
 * 	_putchar(0);
 * 	_putchar(minute);
 * 	}
 *      _putchar(hour);
 *      _putchar(':');
 *      _putchar(0);
 *      _putchar(minute);
 * }
 *
 *if (hour < 10)
 {
	*      if (minute < 10)
 *      {
 *       _putchar(0);
 *      _putchar(hour);
 *      _putchar(':');
 *      _putchar(0);
 *      _putchar(minute);
 *      }
 *      _putchar(0);
 *      _putchar(hour);
 *      _putchar(':');
 *      _putchar(minute);
 * }
 *
 }
 */
