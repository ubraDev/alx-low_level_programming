#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Discription : main - check if number positive or negative
* Return: Always 0 (Success)
*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if (n > 0)
	{
		printf("%d n positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d n zero\n", n);
	}
	else
	{
		printf("%d n negative\n", n);
	}
	return (0);
}
