#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - A function that calculates string length.
 * @s: The string input for processing
 * Return: the length of the input string
 */
int _strlen(char *s)
{
	int g;

	g = 0;
	while (s[g] != '\0')
	{
		g++;
	}
	return (g);
}

/**
 * *_strcpy - A function to copy a string pointed to by src
 * plus the null terminator
 * @dest: pointer to the place for string coying
 * @src: string input for copying
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int length, g;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (g = 0; g < length; g++)
	{
		dest[g] = src[g];
	}
	dest[g] = '\0';
	return (dest);
}

/**
 * new_dog - A functon for new dog creation
 * @name: dog name input
 * @age: dog age input
 * @owner: dog owner input
 * Return: pointer to the new dog else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
