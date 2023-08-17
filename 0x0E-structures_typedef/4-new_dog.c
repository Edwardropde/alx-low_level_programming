#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 * Return: The length of string
 */

int _strlen(char *str)
{

	int i;

	i = 0;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	while (str[i] != '\0')
	{
		i++;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (i);
}

/**
 * _strcopy - Copies a string pointed to by srcs
 * includes terminating null byte
 * @dest: The buffer
 * @src: The source string
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{

	int len, i;

	len = 0;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	while (src[len] != '\0')
	{
		len++;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
<<<<<<< HEAD
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
=======

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (dog);
}
