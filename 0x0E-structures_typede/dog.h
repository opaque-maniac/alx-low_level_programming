#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a struct for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
