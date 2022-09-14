#include "main.h"

/**
 * main - check code
 * Description: It prints the alphabet in lowercase 
 * Return: Nothing.
 */

int void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
