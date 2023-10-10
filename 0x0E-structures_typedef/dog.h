#ifndef DOG_H
#define DOG_H


#include <stdlib.h>  
#include <string.h>
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 *
 * Description: This struct is used to store information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype for init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;


/* Prototype for new_dog function */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
