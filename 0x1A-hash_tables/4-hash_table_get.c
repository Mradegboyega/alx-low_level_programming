#include <stddef.h> 
#include <string.h> 
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key string.
 *
 * Return: The value associated with the key, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Get the index where the key should be stored */
    index = key_index((unsigned char *)key, ht->size);

    /* Traverse the linked list at the index to find the key */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value); /* Key found, return the associated value */
        current = current->next;
    }

    return (NULL); /* Key not found */
}

