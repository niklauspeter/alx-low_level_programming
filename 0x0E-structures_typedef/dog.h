#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - takes in name age and owner
 * @name: takes in name as input
 * @age: takes in age as input
 * @owner: takes in owner as input
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*_DOG_*/
