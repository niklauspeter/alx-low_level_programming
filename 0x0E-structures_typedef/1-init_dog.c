#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - funciton initializes variable of type struct dog
 * @d: struct to intitialize
 * @dog *d: placeholder for dog variable
 * @name: placeholder for name
 * @age: placeholder for age
 * @owner: placeholderfor owner
 * Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
