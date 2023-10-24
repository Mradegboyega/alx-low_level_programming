0x13. C - More Singly Linked Lists
Description

In this project, we continue working with singly linked lists in C. We implement various functions to manipulate and manage linked lists. These tasks help us further practice memory management, linked list operations, and algorithmic problem-solving.
Environment

    OS: Ubuntu 20.04 LTS
    Compiler: GCC 9.3.0
    Coding style: Betty style. We use the betty-style.pl and betty-doc.pl scripts to check the code for compliance with the Betty coding style.

Repository Contents

    lists.h: Header file containing the struct definition and function prototypes used throughout the project.

Compilation

All C files should be compiled with the following flags: 
```c```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

List of Tasks
0. Print list

    File: 0-print_listint.c
    A function that prints all the elements of a listint_t list.

1. List length

    File: 1-listint_len.c
    A function that returns the number of elements in a listint_t list.

2. Add node

    Files: 2-add_nodeint.c, lists.h
    A function that adds a new node at the beginning of a listint_t list.

3. Add node at the end

    Files: 3-add_nodeint_end.c, lists.h
    A function that adds a new node at the end of a listint_t list.

4. Free list

    File: 4-free_listint.c
    A function that frees a listint_t list.

5. Free list

    File: 5-free_listint2.c
    A function that frees a listint_t list and sets the head to NULL.

6. Pop

    File: 6-pop_listint.c
    A function that deletes the head node of a listint_t linked list and returns the head node’s data.

7. Get node at index

    File: 7-get_nodeint.c
    A function that returns the nth node of a listint_t linked list.

8. Sum list

    File: 8-sum_listint.c
    A function that returns the sum of all the data (n) of a listint_t linked list.

9. Insert

    File: 9-insert_nodeint.c
    A function that inserts a new node at a given position in a listint_t list.

10. Delete at index

    File: 10-delete_nodeint.c
    A function that deletes the node at a specified index of a listint_t linked list.

11. Reverse list

    File: 11-reverse_listint.c
    A function that reverses a listint_t linked list.

12. Print (safe version)

    File: 101-print_listint_safe.c
    A function that prints a listint_t linked list safely, detecting and handling loops.

13. Free (safe version)

    File: 101-print_listint_safe.c
    A function that frees a listint_t linked list safely, detecting and handling loops.

14. Find the loop

    File: 102-find_loop.c
    A function that finds the loop in a listint_t linked list.

Compile the C files with the provided compilation flags:

```c```

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o the_program_name

```bash```
run
./the_program_name
