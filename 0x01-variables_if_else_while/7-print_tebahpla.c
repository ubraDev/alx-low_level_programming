#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse,
*
* Return: Always 0 (Success)
*/

int main(void)

{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i--)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
