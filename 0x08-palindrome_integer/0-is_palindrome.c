#include "palindrome.h"

/**
 * is_palindrome -  Calculates if a number is palindrome
 *
 * @n: Number
 *
 * Return: 1 if n is palindrome otherwise 0
 **/
int is_palindrome(unsigned long n)
{
	unsigned long tmp, base, count, i;

	tmp = n;
	for (base = 1, count = 0; tmp > 0; base *= 10, tmp /= 10, count++)
	;

	tmp = n;
	for (i = 0, count /= 2; base > 1 && count > i; i++, tmp /= 10)
	{
		base /= 10;
		if ((n / base) % 10 != tmp % 10)
			return (0);
	}

	return (1);
}
