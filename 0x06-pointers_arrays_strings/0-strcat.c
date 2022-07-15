#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The sorce string
 *
 * Return: A pointer to the final string.
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*scr != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
