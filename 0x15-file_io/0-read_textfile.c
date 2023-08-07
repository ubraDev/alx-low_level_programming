#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
*0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

FILE *file;
char *buffer;
ssize_t bytesRead;
ssize_t w;
if (filename == NULL)
{
return (0);
}

file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}

buffer = (char *)malloc(letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0);
}

bytesRead = fread(buffer, sizeof(char), letters, file);
if (ferror(file))
{
free(buffer);
fclose(file);
return (0);
}

buffer[bytesRead] = '\0';
w = write(STDOUT_FILENO, buffer, bytesRead);

free(buffer);
fclose(file);
return (w);
}
