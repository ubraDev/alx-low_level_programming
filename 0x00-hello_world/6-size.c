#include<stdio.h>
/**
 * Description: main - Prints out a string to stdout
 * Return: return value on success
**/
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("sie of a long int: %lu byte(s)", sizeof(long int));
	pritf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
