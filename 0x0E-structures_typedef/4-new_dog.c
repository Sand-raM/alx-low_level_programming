#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog
 * if fails, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, len1, len2;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;
	p_dog->name = malloc(len1 + 1);
	p_dog->owner = malloc(len2 + 1);
	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;
	for (i = 0; i < len2; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';
	return (p_dog);
}
