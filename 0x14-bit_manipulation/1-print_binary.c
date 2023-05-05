#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed.
 */
void print_binary(unsigned long int n)
{
int i;
unsigned long int mask = 1;

mask <<= 63;

for (i = 0; i < 64; i++)
{
if ((n & mask) == 0)
_putchar('0');
else
_putchar('1');

mask >>= 1;
}

if (n == 0)
_putchar('0');
}
