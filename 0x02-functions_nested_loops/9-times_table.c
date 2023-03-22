#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; ++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
