#include "main.h"

/**
 * jack_bauer - Printing every minutes of the day.
 * Return: nothing
 */

void jack_bauer(void)
{
	int l, m, n, o;

	for (l = 0; l <= 2; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((l <= 1 && m <= 9) || (l <= 2 && m <= 3))
			{
				for (n = 0; n <= 5; n++)
				{
					for (o = 0; 0 <= 9; o++)
					{
						_putchar(l + '0');
						_putchar(m + '0');
						_putchar(58);
						_putchar(n + '0');
						_putchar(o + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
