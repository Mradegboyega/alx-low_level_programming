File I/O Tasks README

This README provides an overview of the tasks and code solutions related to File I/O.
Task 0: _putchar

Files:

    _putchar.c
    main.h

Description:

    The _putchar function is provided as a basic function for outputting a single character.

Task 1: I/O Header

File:

    main.h

Description:

    The main.h header file contains the prototypes for the _putchar function and other functions that will be used in the subsequent tasks. It also includes include guards to prevent multiple inclusions.

Task 2: Read Text File

Files:

    0-read_textfile.c
    main.h

Description:

    The read_textfile function reads and prints the content of a text file to the POSIX standard output.
    The function reads a specified number of letters and returns the actual number of letters read and printed.
    It handles error conditions, such as failing to open or read the file.
    The code follows the provided compilation options and style guidelines.

Task 3: Create a File

Files:

    1-create_file.c
    main.h

Description:

    The create_file function creates a file with specified permissions and writes text content to it.
    It returns 1 on success and -1 on failure.
    The function checks for invalid inputs, such as NULL filename or text_content.
    It adheres to the provided requirements for code style and compilation options.

Task 4: Append Text to File

Files:

    2-append_text_to_file.c
    main.h

Description:

    The append_text_to_file function appends text to the end of a file, with error handling.
    It returns 1 on success and -1 on failure.
    The function handles various error conditions, including missing filenames and permission issues.
    It follows the provided coding style and guidelines.

Task 5: CP

Files:

    3-cp.c

Description:

    The cp program copies the content of one file to another file, implementing error handling as specified.
    It checks the number of command-line arguments, opens and reads the source file, and writes to the destination file.
    The program handles various error scenarios and provides appropriate error messages.
    The program ensures the permissions of the destination file.
    It follows the provided requirements for functionality and error handling.

Task 6: ELF Header

Files:

    100-elf_header.c

Description:

    The elf_header program displays information contained in the ELF header of an ELF file.
    It takes the ELF file as a command-line argument.
    The program reads and parses the ELF header, displaying specific information as specified.
    It handles error conditions and provides comprehensive error messages.
    The program follows the provided compilation options and coding style.
