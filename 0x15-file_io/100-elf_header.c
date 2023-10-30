#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * exit_with_error - Prints an error message to stderr and exits with the specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void exit_with_error(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s", message);
    exit(code);
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header.
 */
void print_elf_header_info(Elf64_Ehdr *header) {
    int i;
    
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x", header->e_ident[i]);
        if (i < EI_NIDENT - 1) {
            printf(" ");
        }
    }
    printf("\n");

    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              0x%.4x\n", header->e_type);
    printf("  Entry point address:               0x%.16lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        exit_with_error(98, "Usage: elf_header elf_filename\n");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        exit_with_error(98, "Error: Cannot open file\n");
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        exit_with_error(98, "Error: Cannot read ELF header\n");
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        exit_with_error(98, "Error: Not an ELF file\n");
    }

    printf("ELF Header:\n");
    print_elf_header_info(&elf_header);

    close(fd);
    return (0);
}

