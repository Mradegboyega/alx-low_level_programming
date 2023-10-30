#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @format: The format string for the error message.
 * @...: Additional arguments for the error message.
 */
void exit_with_error(int code, const char *format, ...) {
    va_list args;
    va_start(args, format);
    dprintf(STDERR_FILENO, format, args);
    va_end(args);
    exit(code);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * 
 * Return: 0 on success, 97, 98, 99, or 100 on failure.
 */
int main(int argc, char *argv[]) {
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        exit_with_error(97, "Usage: cp file_from file_to\n");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        close(fd_from);
        exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            close(fd_from);
            close(fd_to);
            exit_with_error(99, "Error: Can't write to file %s\n", argv[2]);
        }
    }

    if (bytes_read == -1) {
        close(fd_from);
        close(fd_to);
        exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        exit_with_error(100, "Error: Can't close fd %d\n", (fd_from == -1) ? fd_to : fd_from);
    }

    return (0);
}
