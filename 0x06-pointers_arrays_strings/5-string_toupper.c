#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @str: strung to be changed
 *
 * Return: address to the string.
 */

char *string_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[z] <= 'z')
			str[i] -= 32;
		i++
	}
	return (str);
}
