#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to buffer pointed to by dest
 * @dest: where string should be copied to
 * @src: ource origin of string
 * Return: pointer string copied todest
*/

char *_strcpy(char *dest, char *src)
{
char *str = dest;
while (*src)
*dest++ = *src++;
return (str);
}
