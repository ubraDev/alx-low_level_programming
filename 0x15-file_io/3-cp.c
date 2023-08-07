#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024
/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A pointer to the newly-allocated buffer.
*/

int main(int argc, char *argv[])
{

const char *file_from;
const char *file_to;
int fd_from;
int fd_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

if (argc != 3) {
fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

file_from = argv[1];
file_to = argv[2];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", file_from);
return (98);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
fprintf(stderr, "Error: Can't write to %s\n", file_to);
close(fd_from);
return (99);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
fprintf(stderr, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
return (99);
}
}

if (bytes_read == -1)
{
fprintf(stderr, "Error while reading from file %s\n", file_from);
close(fd_from);
close(fd_to);
return (98);
}

if (close(fd_from) == -1)
{
fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
return (100);
}

if (close(fd_to) == -1)
{
fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
return (100);
}

return (0);
}
