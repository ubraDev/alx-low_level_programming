#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
*read_textfile- Read text file print to STDOUT.
*@filename: text file being read
*@letters: number of letters to be read
*Return: w- actual number of bytes read and printed
*0 when function fails or filename is NULL.
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

int fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

char *buffer = (char *)malloc(letters + 1);
if (buffer == NULL)
{
close(fd);
return (0);
}

ssize_t bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (bytes_written);
}