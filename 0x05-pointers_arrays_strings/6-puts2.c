#include "main.h"

/**
 * puts2 - print evry other characters
 * @str: argument
 * Description: return the required result
 * Return: return void
 */

void puts2(char *str)
{
	char *ptr = str;
	int len = 0;
	int j;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	for (j = 0; j <= (len - 1); j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}