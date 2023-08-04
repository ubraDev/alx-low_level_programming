#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Binary number as a string (0 and 1 characters).
 * Return: Converted unsigned int, 
 * or 0 if invalid input 
 * or binary contains non-0/1 characters.
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}

unsigned int result = 0;
unsigned int base = 1;
int length = 0;

while (b[length] != '\0')
{
if (b[length] != '0' && b[length] != '1')
{
return (0);
}
length++;
}

for (int i = length - 1; i >= 0; i--)
{
if (b[i] == '1')
{
result += base;
}
base *= 2;
}
return (result);
}
