#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * @s: An input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *s);
{
if (*s)
{
  _putchar(*s);
  _print_rev_recursion(s - 1);
}
} 