#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc : Count arguments
 * @argv : Arguments
 *
 * Return: Always 0 success
 **/

int main(int argc, char argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
