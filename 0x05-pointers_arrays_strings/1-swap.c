#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap interger a with b
 * @a: first integer
 * @b: second integer
 * Description: return the required result
 * Retun: return void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
