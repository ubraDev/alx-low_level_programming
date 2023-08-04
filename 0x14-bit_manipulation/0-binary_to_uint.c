#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* unsigned int.
* @n: binary.
* Return: unsigned int.
*/
void print_binary(unsigned long int n) {
if (n > 1) {
print_binary(n >> 1); // Right shift the number by 1
}
putchar((n & 1) + '0'); // Print the least significant bit
}

int main() {
unsigned long int num;
printf("Enter a number: ");
scanf("%lu", &num);
printf("Binary representation: ");
print_binary(num);
printf("\n");
return (0);
}
