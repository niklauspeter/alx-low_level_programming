#ifndef _DOG_H_
#define _DOG_H_
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

void init_dog(stuct dog *d, char *name, float age, char *owner);

#endif /*_DOG_*/
