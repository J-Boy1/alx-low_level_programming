#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @src: string that copies
 * @dest: string that recievs the other string
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;

	while (src[y])
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
