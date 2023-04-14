#include "main.h"

/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	char *result = malloc((s1_len + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
