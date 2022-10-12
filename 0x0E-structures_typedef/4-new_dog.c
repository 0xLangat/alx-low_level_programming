#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - Copy a string to another pointer address
 *
 * @dest: The pointer to the new string
 * @src: The pointer to the old string
 *
 * Return: The string dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strlen - return length of a string
 *
 * @dest: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;

	return (i);
}

/**
 * new_dog - creates a new dog
 *
 * @name: the pointer to the name
 * @age: the age
 * @owner: the pointer to the owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;
	int i, j;

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
	{
		return (NULL);
	}

	if (name == NULL || age == 0 || owner == NULL)
	{
		return (NULL);
	}

	i = _strlen(name);
	j = _strlen(owner);
	i = i + 1;
	j = j + 1;

	dog_1->name = malloc(sizeof(char) * i);
	if (dog_1->name == NULL)
		return (NULL);

	dog_1->owner = malloc(sizeof(char) * j);
	if (dog_1->owner == NULL)
		return (NULL);

	_strcpy(dog_1->name, name);
	_strcpy(dog_1->owner, owner);

	dog_1->age = age;
	return (dog_1);
}
