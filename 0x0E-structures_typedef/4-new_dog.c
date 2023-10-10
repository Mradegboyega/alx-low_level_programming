#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure 
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner's name of the dog
 *
 * Return: Pointer to new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog;
        char *name_copy;
        char *owner_copy;

        new_dog = malloc(sizeof(dog_t));
        if (new_dog == NULL)
                return (NULL);
        
        if (name == NULL || owner == NULL)
        {
                free(new_dog);
                return (NULL);
        }

        name_copy = strdup(name);
        if (name_copy == NULL)
        {
                free(new_dog);
                return (NULL);
        }

        owner_copy = strdup(owner);
        if (owner_copy == NULL)
        {
                free(name_copy);
                free(new_dog);
                return (NULL);
        }

        new_dog->name = name_copy;
        new_dog->age = age;
        new_dog->owner = owner_copy;

        return (new_dog);
}
