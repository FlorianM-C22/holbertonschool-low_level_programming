#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *free_dog - doggy's free
 *@d: pointer to structure
 *Return: new dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free previously allocated memory */
		free(d->name);
		free(d->owner);

		/* Free previously allocated memory */
		free(d);
	}
}
