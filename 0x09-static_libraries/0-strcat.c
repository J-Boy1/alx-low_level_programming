#include <string.h>
#include "main.h"

/**
* _strcat - a  function that concatenates two strings char to dest.
* @src: pointer to string being appended to dest string.
* @dest: a pointer to string that scr is being added to.
* Return: Always 0 (Success);
*/

char *_strcat(char *dest, char *src)
{
	int k, m;

	k = m = 0;
while ((*(dest + k)))
k++;
	while (((*(dest + k) = *(src + m))))
{
		m++;
		k++;
}
return (dest);
}
