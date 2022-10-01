#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int d, g, n, m;

	d = n = 0;
	m = 1;
	while ((*(s + d) < '0' || *(s + d) > '9') && (*(s + d) != '\0'))
	{
		if (*(s + d) == '-')
			m *= -1;
		d++;
	}
	g = d;
	while ((*(s + g) >= '0') && (*(s + g) <= '9'))
	{
		n = n * 10 + m * (*(s + g) - '0');
		g++;
	}
	return (n);
}
