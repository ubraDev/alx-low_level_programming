#include <stdio.h>
/**
*main - program that prints the alphabet in lowercase
*and then in uppercase
*Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
