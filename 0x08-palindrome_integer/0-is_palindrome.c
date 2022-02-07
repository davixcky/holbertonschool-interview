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
	unsigned long tmp, base;

	tmp = n;
	for (base = 1; tmp > 0; base *= 10, tmp /= 10)
	;

	tmp = n;
	while (base > 1)
	{
		base /= 10;
		if ((n / base) % 10 != tmp % 10)
			return (0);
		tmp /= 10;
	}

	return (1);
}
