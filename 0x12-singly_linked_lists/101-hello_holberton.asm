section .data
    format db "%s", 10, 0  ; The format string to print a string with a newline

section .text
    global _start

_start:
    ; Save registers
    push rbx
    push r12
    push r13
    push r14
    push r15

    ; Call the print_hello function with format string and arguments
    mov rdi, 1           ; file descriptor 1 (stdout)
    mov rsi, hello       ; Address of the string to print
    mov rdx, hello_len   ; Length of the string
    call print_hello

    ; Restore registers
    pop r15
    pop r14
    pop r13
    pop r12
    pop rbx

    ; Exit the program
    mov rax, 60          ; syscall number for exit
    xor rdi, rdi         ; Exit status 0
    syscall

section .bss
    hello resb 100       ; Buffer for hello message
    hello_len equ $ - hello  ; Calculate the length of the hello message

section .text
    ; The print_hello function
    print_hello:
        ; Parameters:
        ;   RDI: file descriptor
        ;   RSI: pointer to the string
        ;   RDX: length of the string
        ;   ...: additional arguments

        ; syscall to write
        mov rax, 1           ; syscall number for write
        syscall

        ret

