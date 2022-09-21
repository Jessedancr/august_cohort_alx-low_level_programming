#include "main.h"
/**
 * _strncat - concatenate two stings but add inputteff number of bytes
 * @dest: String to be appended upon
 * @src: string to be complted at the end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concateneated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
