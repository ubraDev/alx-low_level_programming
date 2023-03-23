#include "main.h"

/**
*positive_or_negative - check if number is positive or negative
*@i: number i
*Return : return 0.
**/
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
