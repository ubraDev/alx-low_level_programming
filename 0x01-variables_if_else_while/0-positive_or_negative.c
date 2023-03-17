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
	if (n > 0)
	{
		printf("%d is number positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is number zero\n", n);
	}
	else
	{
		printf("%d is number negative\n", n);
	}
	return (0);
}

