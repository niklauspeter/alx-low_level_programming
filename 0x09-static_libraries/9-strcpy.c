#include "main.h"
/**
 *_strcpy - function Copy pastes a string
 *@dest: destination
 *@src: source
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (*(src + i) != '\0')
    {
       *(dest + i) = *(src + i);
        i++;
        }
        *(dest + i) = '\0';

        return (dest);
} 
