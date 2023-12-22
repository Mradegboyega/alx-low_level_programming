#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    /* Use the hash_djb2 function to compute the hash value */
    hash_value = hash_djb2(key);

    /* Use the hash value modulo the size to get the index */
    return (hash_value % size);
}

