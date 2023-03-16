#include<stdio.h>
/**
 * Description: main - Prints out a size of type variable
 * Return: return value on success
**/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Szie of a long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
