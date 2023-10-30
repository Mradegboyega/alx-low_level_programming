#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_with_error(int code, const char *message);
void print_elf_header_info(Elf64_Ehdr *header);
int main(int argc, char *argv[]);



#endif /* MAIN_H */
