#include <stdlib.h>
#include "dog.h"

/**
 * strlength - find length
 * @str: string value
 * Return: 0
 */
int strlength(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *strcopy - copies string
 * @dest: pointer to copy string
 * @src: string to be copied
 * Return: 0
 */
char *strcopy(char *dest, char *src)
{
	int l, x;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return:0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = strlength(name);
	l2 = strlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcopy(dog->name, name);
	strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}


