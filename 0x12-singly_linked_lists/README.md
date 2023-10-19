# Singly Linked List Tasks

This project involves implementing various tasks related to singly linked lists in the C programming language. You will be working with a custom data structure called `list_t` that represents singly linked list nodes, and each node contains a string and its length.

## Task 0: Print Elements of a List

- File: `0-print_list.c`
- Prototype: `size_t print_list(const list_t *h);`

This function prints all the elements of a `list_t` list and returns the number of nodes. If the `str` in a node is NULL, it prints "[0] (nil)".

## Task 1: Count Elements in a List

- File: `1-list_len.c`
- Prototype: `size_t list_len(const list_t *h);`

This function returns the number of elements (nodes) in a `list_t` list.

## Task 2: Add a Node at the Beginning

- File: `2-add_node.c`
- Prototype: `list_t *add_node(list_t **head, const char *str);`

This function adds a new node at the beginning of a `list_t` list. It duplicates the `str` and returns the address of the new element.

## Task 3: Add a Node at the End

- File: `3-add_node_end.c`
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`

This function adds a new node at the end of a `list_t` list. It duplicates the `str` and returns the address of the new element.

## Task 4: Free a List

- File: `4-free_list.c`
- Prototype: `void free_list(list_t *head);`

This function frees all the nodes of a `list_t` list.

## Task 5: Pre-execution Message

- File: `5-the_checker.c`

This task prints the message:

before the `main` function is executed. It uses the `printf` function.

## Task 6: Hello Holberton (Assembly)

- File: `101-hello_holberton.asm`

This task involves writing a 64-bit assembly program that prints "Hello, Holberton" followed by a new line. It uses the `printf` function and follows x86-64 ABI conventions.

For each task, ensure that the code is compliant with the provided style requirements and includes appropriate comments and indentation.


