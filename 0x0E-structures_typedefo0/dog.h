#ifndef STRUCTDOG_
#define STRUCTDOG_
#include <stdlib.h>
/**
 * struct dog - Variables for dog description
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* initializes a variable of type struct dog. */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* prints a struct dog. */
void print_dog(struct dog *d);

/* Define a new type dog_t as a new name for the type struct dog. */
typedef struct dog dog_t;

/* creates a new dog. */
dog_t *new_dog(char *name, float age, char *owner);

#include "dog.h"
/**
 * free_dog - frees a dog
 *
 * @d: dog to free
 *
 * Return: void
 */

/* frees dogs. */
void free_dog(dog_t *d);

#endif
