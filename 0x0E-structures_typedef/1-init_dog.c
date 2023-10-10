#include <stdio.h>
#include <stdlib.h>
#include "dog.h" /** Include the header file where the struct is defined */

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
 *
 * Description:
 * This function initializes the members of a struct dog
 * with the provided values for name, age, and owner.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
