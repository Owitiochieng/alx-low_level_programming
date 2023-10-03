#include "main.h"
/**
 * check_elf - This function checks for an ELF file
 * @e_ident: An input that points to an array that has the ELF magic numbers
 * Description: Should the file be a non-ELF file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 0x7F &&
				e_ident[ind] != 'E' &&
				e_ident[ind] != 'L' &&
				e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - This function prints the magic numbers of an ELF header
 * @e_ident: This input points to an array that has the ELF magic numbers
 * Description: Spaces separate these magic numbers
 */
void print_magic(unsigned char *e_ident)
{
	int ind;

	printf("  Magic:   ");
	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_ident[ind]);
		if (ind != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - This function prints the class of an ELF header
 * @e_ident: This input points to an array that has the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
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
 * print_data - This function prints the data of an ELF header
 * @e_ident: This points to an array having the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
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
 * print_version - This function prints the version of an ELF header
 * @e_ident: This input points to an array that has the ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
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
 * print_osabi - This function prints the OS/ABI of an ELF header
 * @e_ident: This function points to an array that has the ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
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
 * print_abi - This function prints ABI version of an ELF header
 * @e_ident: This input points to an array that has the ELF ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - This function prints the type of an ELF header
 * @e_type: An input of the ELF type
 * @e_ident: This points to an array having the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	printf("  Type:                              ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

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
 * print_entry - This function for printing the entry point of an ELF header
 * @e_entry: This represents the address of the ELF entry point
 * @e_ident: This points to an array that has the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("0x%x\n", (unsigned int)e_entry);
	else
		printf("0x%lx\n", e_entry);
}

/**
 * close_elf - This function closes an ELF file
 * @elf: This represents the file descriptor of the ELF file
 * Description: Should the file be nonclosable - exit code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - This function Shows the info within the ELF header at
 * the beginning of an ELF file
 * @argc: Represents number of arguments used in the program
 * @argv: Represents an array of pointers to the arguments
 * Return: 0
 * Description: Should the file be non ELF File or the
 * function fail - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int open_res, read_res;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF-file>\n", argv[0]);
		return (98);
	}
	open_res = open(argv[1], O_RDONLY);
	if (open_res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98); }
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(open_res);
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(98); }
	lseek(open_res, 0, SEEK_SET);
	read_res = read(open_res, header, sizeof(Elf64_Ehdr));
	if (read_res == -1)
	{
		free(header);
		close_elf(open_res);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98); }
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(open_res);
	return (0);
}
