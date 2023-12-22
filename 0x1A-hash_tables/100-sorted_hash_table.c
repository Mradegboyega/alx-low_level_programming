#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_sorted_insert - Inserts a node into a sorted linked list
 * @ht: The sorted hash table
 * @new_node: The new node to insert
 */
void shash_table_sorted_insert(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current;

    if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
    {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;
        if (ht->shead != NULL)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (ht->stail == NULL)
            ht->stail = new_node;
        return;
    }

    current = ht->shead;
    while (current->snext != NULL && strcmp(current->snext->key, new_node->key) < 0)
        current = current->snext;

    new_node->snext = current->snext;
    new_node->sprev = current;
    if (current->snext != NULL)
        current->snext->sprev = new_node;
    else
        ht->stail = new_node;
    current->snext = new_node;
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: The created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;

    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    current = ht->shead;
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        current = current->snext;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    shash_table_sorted_insert(ht, new_node);

    return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: The sorted hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL)
        return (NULL);

    current = ht->shead;
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints the elements of a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;
    int comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        if (comma_flag == 1)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        comma_flag = 1;
        current = current->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the elements of a sorted hash table in reverse
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;
    int comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->stail;
    while (current != NULL)
    {
        if (comma_flag == 1)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        comma_flag = 1;
        current = current->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    current = ht->shead;
    while (current != NULL)
    {
        temp = current->snext;
        free(current->key);
        free(current->value);
        free(current);
        current = temp;
    }

    free(ht->array);
    free(ht);
}

