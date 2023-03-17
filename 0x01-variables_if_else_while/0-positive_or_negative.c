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
		printf("%d this number is positive \n", n);
	if (n == 0)
		printf("this number is zero \n", n);
	if (n < 0)
		printf("this number is negative \n", n);

	return (0);
}
