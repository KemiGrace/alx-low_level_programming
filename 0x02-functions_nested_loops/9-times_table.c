#include "main.h"

/**
 * times_table - We are printing the 9 times table, starting with 0
 * Return: return an empty output
 */

void times_table(void)


{
	int s, u, v, w, x;

	for (s = 0; s <= 9; s++)
	{
		for (u = 0; u <= 9; u++)
		{
			v = s * u;
			if (v > 9)
			{
				w = v % 10;
				x = (v - w) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(x + '0');
				_putchar(w + '0');
			}
			else
			{
				if (u != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(v + '0');
			}
		}
		_putchar('\n');
	}
}
