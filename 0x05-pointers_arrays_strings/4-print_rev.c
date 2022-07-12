#include "main.h"

 /**
  * print_rev - print a steing in reverse
  * @s: argument to the function
  * Description: return the required result
  * Return: retuen void
  */

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
