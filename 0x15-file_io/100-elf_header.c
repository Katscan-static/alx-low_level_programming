#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdint.h>

/**
 * print_header - prints parts of an elf header file
 * @header: the header file to be printed
 */

void print_header(Elf64_Ehdr *header)
{
	const char *cl[] = {"NONE", "ELF32", "ELF64"};
	const char *dt[] = {"NONE", "2's complement, little endian",
				"2's complement, big endian"};
	const char *sy[] = {"<unknown: 53>", "UNIX - System V", "UNIX - HP-UX",
				"UNIX - NetBSD", "UNIX - GNU", "UNIX - Solaris",
				"UNIX - IRIX", "UNIX - FreeBSD",
				"UNIX - TRU64", "ARM",
				"Standalone App", "Unknown/Not specified"};
	const char *tp[] = {"NONE (Unknown type file)", "REL (Relocatable file)",
				"EXEC (Executable file)", "DYN (Shared object file)",
				"CORE (Core file)"};
	const char *ve[] = {"0 (invalid)", "1 (current)"};
	uint8_t cl_int, dt_int, sy_int, ve_int, ve_abi, i = 0;
	uint16_t tp_int;

	cl_int = header->e_ident[EI_CLASS];
	dt_int = header->e_ident[EI_DATA];
	sy_int = header->e_ident[EI_OSABI];
	ve_int = header->e_ident[EI_VERSION];
	ve_abi = header->e_ident[EI_ABIVERSION];
	tp_int = header->e_type;
	printf("ELF Header:\n  Magic:");
	for (; i < EI_NIDENT; i++)
	{
		if (i == 0)
			printf("   %02x", header->e_ident[i]);
		else
			printf(" %02x", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:			     %s\n", cl[cl_int]);
	printf("  Data:				     %s\n", dt[dt_int]);
	printf("  Version:			     %s\n", ve[ve_int]);
	printf("  OS/ABI:			     %s\n", sy[sy_int]);
	printf("  ABI Version:			     %d\n", ve_abi);
	printf("  Type:				     %s\n", tp[tp_int]);
	if (cl_int == 2)
		printf("  Entry point address:		     0x%lx\n", header->e_entry);
	if (cl_int == 1)
		printf("  Entry point address:		     0x%x\n", (unsigned int)header->e_entry);
}

/**
 * main - code entry
 * @ac: argument count
 * @av: argument variable
 *
 * Return: always 0 success
 */

int main(int ac, char **av)
{
	int f_open;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: elf_header filename\n");
		exit(98);
	}

	f_open = open(av[1], O_RDONLY);

	if (f_open < 0)
	{
		fprintf(stderr, "Error: Couldn't read file %s\n", av[1]);
		exit(98);
	}

	if (read(f_open, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: failed to read header");
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "file %s is not an ELF file\n", av[1]);
		exit(98);
	}

	print_header(&header);

	close(f_open);
	return (0);
}
