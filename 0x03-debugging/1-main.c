#include <stdio.h>

/**
 * main - causes an infinite loope
 * Retur: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while(i < 0)
	{
		putchar(i);
	}

	printf("Infinte loop avoide! \\o/n\n");

	return(0);
}
