#include "main.h"

/**
 * file_is_elf - function checks whether a file is ELF file
 * or not
 * @e_ident: pointer points to an array containing ELF magic numbers
 *
 * Return: nothing, exit with code 98, if not an ELF file
 */
void file_is_elf(unsigned char *e_ident)
{
	int i = 0;

	/* e_ident is ELF header struct member, an array of bytes */
	/* specifies how to interpret the file */
	while (i < 4)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: file is not an ELF\n");
			exit(98);
		}
		i++;
	}
}

/**
 * print_elf_magic - function prints ELF header magic numbers
 * @e_ident: pointer to array with the ELF magic numbers
 *
 * Return: nothing
 */
void print_elf_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	/* EI_NIDENT is e_ident array size, array is named by macros,*/
	/*starts with prefixEI_ */
	while (i < EI_NIDENT)
	{
		printf("%02x", e_ident[i]);
		if(i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}

/**
 * print_elf_class - function prints ELF header class
 * @e_ident: pointer to array
 *
 * Return: nothing
 */
void print_elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	/* EI_CLASS is the fifth byte of the magic number,*/
	/* identifies binary architecture: invalide class, 32 or 64 bit*/
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_elf_data - function prints ELF header data
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	/* EI_DATA is the sixth mgic number byte, specifies the processor-specific*/
	/*data in the file data encoding, unknown data, little and big-endian */
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_elf_version - function prints ELF header version
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	/* EI_VERSION is seventh byte, ELF specification version number,*/
	/*invalid or current version */
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_elf_osabi - function prints ELF header OS/ABI
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	/* EI_OSABi, eighth byte identifies the OS and ABI to which the oject is*/
	/*targeted, interpretation is determined by the byte value*/
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_elf_abivers - function prints ELF header ABI version
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_abivers(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
	/* EI_ABIVERSION, ninth byte, dentifies the version of the ABI to*/
	/*which the object is targeted */
}

/**
 * print_elf_type - function printf ELF header type
 * @e_type: ELF type
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	/* e_type, structure member identifies the object file type: unknown type,*/
	 /* relocatable, executable file, shared object or core object*/
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_elf_entry - function prints ELF header entry
 * @e_entry: print ELF entry point address
 * @e_ident: pointer to an array
 *
 * Return: nothing
 */
void print_elf_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	/* e_entry, structure member, gives the virtual address to which the system*/
	 /* first transfers control, starting process. holds 0,*/
	 /* if file has no associated entry point */

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf_file - function close ELF file
 * @fd: elf file descriptor
 *
 * Return: nothing
 */
void close_elf_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: close failed %d\n", fd);
		exit(98);
	}
}

/**
 * main - function displays ELF header information at ELF file start
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit(98) if not an ELF file
 *
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int op, rd;

	(void)argc;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_file(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf_file(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	file_is_elf(header->e_ident);
	printf("ELF Header:\n");
	print_elf_magic(header->e_ident);
	print_elf_class(header->e_ident);
	print_elf_data(header->e_ident);
	print_elf_version(header->e_ident);
	print_elf_osabi(header->e_ident);
	print_elf_abivers(header->e_ident);
	print_elf_type(header->e_type, header->e_ident);
	print_elf_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf_file(op);
	return (0);
}
