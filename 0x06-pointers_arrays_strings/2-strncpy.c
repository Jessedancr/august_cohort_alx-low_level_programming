#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * if the length of the source string id less than the maximum byte number.
 * the remainder of the destination string is filled with null bytes,
 * works identicallty to standard librry function 'strncpy'.
 * @dest: buffer storing the copy
 * @src: the sorce of string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
