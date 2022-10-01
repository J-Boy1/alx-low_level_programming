#include "main.h"

/**
* _strlen - Reads the length of string
*
* @s: Returns the value of a string
*
*Return: k;
*/

int _strlen(char *s)
{
int k = 0;
	while (s[k])
		k++;
	return (k);
}
