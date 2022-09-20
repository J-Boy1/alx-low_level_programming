#include "main.h"

/**
 * swap_int - two integers
 * @a: integer pointer
 * @b: integer pointer
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
