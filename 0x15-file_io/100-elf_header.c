#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; ++i)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("Class: ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASSNONE: printf("None\n"); break;
case ELFCLASS32:   printf("ELF32\n"); break;
case ELFCLASS64:   printf("ELF64\n"); break;
default:   printf("Unknown\n");
}

printf("Data:  ");
switch (header->e_ident[EI_DATA])
{
case ELFDATANONE: printf("None\n"); break;
case ELFDATA2LSB: printf("2's complement,
little endian\n"); break;
case ELFDATA2MSB: printf("2's complement,
big endian\n"); break;
default:  printf("Unknown\n");
}

printf("Version:   %d\n", header->e_ident[EI_VERSION]);

printf("OS/ABI:");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_NONE:printf("UNIX
System V ABI\n"); break;
case ELFOSABI_SYSV:printf("UNIX
System V ABI\n"); break;
case ELFOSABI_LINUX:   printf("Linux 
ABI\n"); break;
case ELFOSABI_SOLARIS: printf("Solaris 
ABI\n"); break;
case ELFOSABI_FREEBSD: printf("FreeBSD 
ABI\n"); break;

default:   printf("Unknown\n");
}

printf("ABI Version:   
%d\n", header->e_ident[EI_ABIVERSION]);

printf("Type:  ");
switch (header->e_type)
{
case ET_NONE:printf("None\n"); break;
case ET_REL: printf("Relocatable\n"); break;
case ET_EXEC:printf("Executable\n"); break;
case ET_DYN: printf("Shared object\n"); break;
case ET_CORE:printf("Core\n"); break;
default: printf("Unknown\n");
}

printf("Entry point address:   
0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header 
elf_filename");
}

const char *elf_filename = argv[1];
int fd = open(elf_filename, O_RDONLY);
if (fd == -1)
{
print_error("Error opening the file");
}

Elf64_Ehdr header;
ssize_t num_read = read(fd, 
&header, sizeof(header));
if (num_read != sizeof(header))
{
print_error("Error reading 
ELF header");
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Not an ELF file");
}

print_elf_header_info(&header);

close(fd);
return 0;
}
