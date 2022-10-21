#include "main.h"
/*
 * _isupper - code that prints uppercase letters
 *
 * @c: checks character
 *
 * Return: always 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
