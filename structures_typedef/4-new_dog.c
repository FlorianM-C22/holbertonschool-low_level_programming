#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - WASSUP DAWG
 *@name: name of the new doggo
 *@age: age of the good boy
 *@owner: happy owner
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*Allocate memory for the new dog structure*/
	dog_t *newDog = malloc(sizeof(dog_t));

	/*Check if memory allocation was successful*/
	if (newDog == NULL)
		return (NULL);  /*Return NULL if allocation fails*/

/* Allocate memory for the name string and copy the provided value */
	newDog->name = strdup(name);

	/* Check if name string allocation was successful */
	if (newDog->name == NULL)
	{
		/* Free previously allocated memory for the structure */
		free(newDog);
		return (NULL); /* Return NULL if string allocation fails */
	}

	/* Allocate memory for the owner string and copy the provided value */
	newDog->owner = strdup(owner);

	/* Check if owner string allocation was successful */
	if (newDog->owner == NULL)
	{
		/*Free previously allocated memory for the structure and name */
		free(newDog->name);
		free(newDog);
		return (NULL); /* Return NULL if string allocation fails */
	}

	newDog->age = age; /* Copy the provided age value */

	return (newDog); /* Return the pointer to the newly created dog structure */
}
