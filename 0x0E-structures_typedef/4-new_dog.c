#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - program that creat new details of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int namea = 0, owna = 0;

	if (name != NULL && owner != NULL)
	{
		namea = _strlen(name) + 1;
		owna = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));
		if (max_dog == NULL)
			return (NULL);
		max_dog->name = malloc(sizeof(char) * namea);
		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}
		max_dog->owner = malloc(sizeof(char) * owna);
		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}
		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}
	return (max_dog);
}

/**
 * _strlen - program that Returns the length of a string
 * @s: String to be counted
 * Return: String
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

/**
 * _strcpy - program that Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
