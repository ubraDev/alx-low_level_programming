#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>


/**
* print_error - Checks if a file is an ELF file.
* @msg: A pointer to an array containing the ELF magic numbers.
*
* Description: If the file is not an ELF file - exit code 98.
*/
void print_error(const char *msg)
{
fprintf(stderr, "Error: %s\n", msg);
exit(98);
}

/**
* print_error - Checks if a file is an ELF file.
* @header: A pointer to an array containing the ELF magic numbers.
*
* Description: If the file is not an ELF file - exit code 98.
*/
void print_elf_header_info(Elf64_Ehdr header)
{
printf("Magic: ");
for (int i = 0; i < EI_NIDENT; ++i)
{
printf("%02x ", header.e_ident[i]);
}
printf("\nClass: %s\n",
(header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("Data: %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ?
"2's complement, little-endian" : "2's complement, big-endian");
printf("Version: %d\n", header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

printf("Type: %d\n", header.e_type);
printf("Entry point address: 0x%lx\n", header.e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}

const char *elf_filename = argv[1];
int fd = open(elf_filename, O_RDONLY);
if (fd < 0)
{
print_error("Failed to open the ELF file");
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
close(fd);
print_error("Failed to read ELF header");
}

if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
close(fd);
print_error("Not an ELF file");
}

print_elf_header_info(header);

close(fd);
return (0);
}
