#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: an integer to swap
 * @b: another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tip;

	tip = *a;
	*a = *b;
	*b = tip;
}
