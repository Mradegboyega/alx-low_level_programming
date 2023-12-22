# Hash Tables Project

This project involves the implementation of a hash table data structure in C, along with various functionalities related to hash functions, key indexing, and operations on hash tables.

## Task 0: Hash Table Creation

### Description
Write a function that creates a hash table.

### Prototype
```c
hash_table_t *hash_table_create(unsigned long int size);

Task 1: djb2 Hash Function
Description

Implement the djb2 hash function.
Prototype

c

unsigned long int hash_djb2(const unsigned char *str);

Task 2: Key Indexing
Description

Write a function that gives you the index of a key in a hash table.
Prototype

c

unsigned long int key_index(const unsigned char *key, unsigned long int size);

Task 3: Hash Table Element Addition
Description

Write a function that adds an element to the hash table.
Prototype

c

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

Task 4: Retrieve Value by Key
Description

Write a function that retrieves a value associated with a key in the hash table.
Prototype

c

char *hash_table_get(const hash_table_t *ht, const char *key);

Task 5: Hash Table Printing
Description

Write a function that prints a hash table.
Prototype

c

void hash_table_print(const hash_table_t *ht);

Task 6: Hash Table Deletion
Description

Write a function that deletes a hash table.
Prototype

c

void hash_table_delete(hash_table_t *ht);

Task 7: Sorted Hash Table (Advanced)
Description

Implement a sorted hash table with additional features.
Additional Data Structures

c

typedef struct shash_node_s {
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s {
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
