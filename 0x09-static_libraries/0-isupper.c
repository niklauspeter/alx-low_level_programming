#include "main.h"
/**
 * _isupper - function verifies if character is uppercase
 * @c : tested character
 * Return: returns 1 if c is uppercase, 0 if not
*/

int isupper(int c)
{
    if  ((c >= 'A') && (c <= 'Z'))
    return (1);

    return(0);
}
