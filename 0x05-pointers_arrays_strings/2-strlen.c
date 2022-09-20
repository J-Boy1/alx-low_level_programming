#include "main.h"
/**
 * int _strlen - return the length of a string
 * @s: length pointer
 * return: nothing
 */
int _strlen(char *s)
{
	char *s;
	int len;

	*s = 'string';
	len = _strlen(s);

	return (len);
}
