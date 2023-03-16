#include<stdio.h>
/**
 * Description:  main - Print out a size of type vari
 * Return: return value if each type of variable
**/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of int: %lu byte(s)\n", sizeof(b));
printf("Szie of a long int: %lu byte(s)\n", sizeof(c));
printf("size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
