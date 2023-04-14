#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - function that allocates memory using malloc
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (p);
}
