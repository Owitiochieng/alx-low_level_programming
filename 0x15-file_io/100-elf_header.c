#include "main.h"
/**
 * check_elf - A function for checking for ELF files
 * @e_ident: This input points to an array containing the id of an ELF
 * Description: Should the file be a non ELF file - exit code 98
 * Return: Void
 */
void check_elf(unsigned char *e_ident)
{
        int ind;

        for (ind = 0; ind < 4; ind++)
        {
                if (e_ident[ind] != 127 &&
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
 * print_magic - This is function prints the magic numbers of an ELF header
 * @e_ident: This input points to an array containing id of an ELF
 * Description: Magic numbers are separated by spaces
 * Return: Void
 */
void print_magic(unsigned char *e_ident)
{
        int ind;

        printf(" Magic: ");

        for (ind = 0; ind < EI_NIDENT; ind++)
        {
                printf("%02x", e_ident[ind]);

                if (ind == EI_NIDENT - 1)
                        printf("\n");
                else
                        printf(" ");
        }
}
/**
 * print_class - A function for printing the class of an ELF header
 * @e_ident: This input points to an array containing id of an ELF class
 * Return: Void
 */
void print_class(unsigned char *e_ident)
{
        printf(" Class: ");

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
 * @e_ident: This input points to an array with an ELF data
 * Return: Void
 */
void print_data(unsigned char *e_ident)
{
        printf(" Data: ");

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
 * @e_ident: This input points to an array containing the ELF version
 * Return: Void
 */
void print_version(unsigned char *e_ident)
{
         printf(" Version: %d",
                          e_ident[EI_VERSION]);

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
 * @e_ident: This input points to an array with the ELF version
 * Return: Void
 */
void print_osabi(unsigned char *e_ident)
{
        printf(" OS/ABI: ");

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
 * print_abi - This function is for printing ABI version of an ELF header
 * @e_ident: This input points to an array with the ABI version of an ELF
 * Return: Void
 */
void print_abi(unsigned char *e_ident)
{
        printf(" ABI Version: %d\n",
                e_ident[EI_ABIVERSION]);
}
/**
 * print_type - This function prints the type of an ELF header
 * @e_type: An input of the ELF type
 * @e_ident: An input that points to an array with the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
        if (e_ident[EI_DATA] == ELFDATA2MSB)
                e_type >>= 8;

        printf(" Type: ");

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
 * print_entry - This function prints the entry point of an ELF header
 * @e_entry: This is an input address of the ELF entry point
 * @e_ident: This input points to an array containing the ELF class
 * Return: Void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
        printf(" Entry point address: ");

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
 * close_elf - This function closes an ELF file
 * @elf: This is an input file descriptor of the ELF file
 * Description: Should the file be nonclosable - exit code 98
 * Return: Void
 */
void close_elf(int elf)
{
        if (close(elf) == -1)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't close fd %d\n", elf);
                exit(98);
        }
}
/**
 * main - This function shows the info within the
 * ELF header at the beginning of an ELF file
 * @argc: An input of the number of arguments of the program
 * @argv: This is an input of the arguments valuees of the program
 * Description: Should the file be a non ELF File or upon failure
 * of the function - exit code 98
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
        Elf64_Ehdr *elf_header;
        int open_res, read_res;

        open_res = open(argv[1], O_RDONLY);
        if (open_res == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
                exit(98);
        }
        elf_header = malloc(sizeof(Elf64_Ehdr));
        if (elf_header == NULL)
        {
                close_elf(open_res);
                dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
                exit(98);
        }
        read_res = read(open_res, elf_header, sizeof(Elf64_Ehdr));
        if (read_res == -1)
        {
                free(elf_header);
                close_elf(open_res);
                dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
                exit(98);
        }

        check_elf(elf_header->e_ident);
        printf("ELF Header:\n");
        print_magic(elf_header->e_ident);
        print_class(elf_header->e_ident);
        print_data(elf_header->e_ident);
        print_version(elf_header->e_ident);
        print_osabi(elf_header->e_ident);
        print_abi(elf_header->e_ident);
        print_type(elf_header->e_type, elf_header->e_ident);
        print_entry(elf_header->e_entry, elf_header->e_ident);

        free(elf_header);
        close_elf(open_res);
        return (0);
}
