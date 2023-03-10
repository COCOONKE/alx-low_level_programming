#include "main.h"

/**
 * _strcat - concatanates the string pointed to by @src, including the terminat
 * null byte, to the end of the string pointed to by @dest.
 * @src: The source string to be appended to @dest.
 * @dest: character receiving the string
 * Return: a pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
