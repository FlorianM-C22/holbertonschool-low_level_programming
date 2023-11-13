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

	/*Allocate memory for the name and owner strings, copy the provided values*/
	newDog->name = strdup(name);
	newDog->age = age;
	newDog->owner = strdup(owner);

	/*Check if string allocations were successful*/
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		/*Free previously allocated memory*/
		free(newDog);
		free(newDog->name);
		free(newDog->owner);

		return (NULL);/*Return NULL if string allocation fails*/
	}

	return (newDog); /*Return the pointer to the newly created dog structure*/

}
