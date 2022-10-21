#include "main.h"

/**
 * _isdigit - function that check for a digit (0 through 9).
 * @c: int to check
 * Return:  0 or 1
 **/
int _isdigit(int c)

{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
