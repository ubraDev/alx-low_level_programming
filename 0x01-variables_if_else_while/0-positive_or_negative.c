#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Discription : main - check if number positive or negative */
/* Return : return number of eache cas*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if (n >= 0)
		printf("this number is positive %d", n);
	if (n == 0)
		printf("this number is zero %d ", n);
	if (n < 0)
		printf("this number is negative %d ", n);
	return (0);
}
