#include "main.h"
/**
 *_isdigit - function that verifies if a character is a digit or not
 *@c: character to be tested
 *Return: return 1 if it is digit, 0 if not
 */

int _isdigit(int c)
{
    if ((c >= 48) && (c <= 57))
    return (1);

    return (0);
}
