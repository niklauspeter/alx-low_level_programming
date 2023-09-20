#include "main.h"
#include <stddef.h> 
/**
*_strchr - Returns a pointer to first occurrence
* of the character c in the string s,
* returns NULL if the
* character is not found
*
*@s:targeted string
*@c:targeted character
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
    int i;
    
    for (i = 0; s[i] != c && s[i] != '\0'; i++)
            ;
    if (s[i] == c)
        return (s + 1);
    else 
        return (NULL);
}