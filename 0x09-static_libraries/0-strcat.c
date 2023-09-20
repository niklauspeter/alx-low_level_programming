#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will append
 *@src: string that will be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
    int index =0;
    int dest_length = 0;

    while(dest[index++])
    {
        dest_length++;
    }
    for (index=0; src[index]; index++)
    {
        dest[dest_length++] = src[index];
    }
    return (dest);
}
