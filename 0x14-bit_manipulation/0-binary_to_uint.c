#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* unsigned int.
* @b: binary.
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
res = (res << 1) + (b[i] - '0');
}
return (res);
}
