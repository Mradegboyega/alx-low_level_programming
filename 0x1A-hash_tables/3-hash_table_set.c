#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    /* Get the index where the key/value pair should be stored */
    index = key_index((unsigned char *)key, ht->size);

    /* Check if the key already exists, update its value */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Duplicate the value and free the old one */
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1); /* Update successful */
        }
        current = current->next;
    }

    /* Key does not exist, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    /* Duplicate the key and value */
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Check for allocation failures */
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Add the new node at the beginning of the list (collision handling) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

