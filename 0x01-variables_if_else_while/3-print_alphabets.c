#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,.
 *and then in uppercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(alphabet[n]);
	}
	putchar("\n);
	return (0);
}
