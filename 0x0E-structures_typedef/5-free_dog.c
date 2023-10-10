#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory associated with a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description:
 * This function frees the memory allocated for a dog structure,
 * including the dynamically allocated strings for the name and owner.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the dynamically allocated strings */
	free(d->name);
	free(d->owner);

	/* Free the dog structure itself */
	free(d);
}
