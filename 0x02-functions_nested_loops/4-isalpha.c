#include "main.h"

/** 
 * _isalpha - cheacks if input is an alphabetic character
 * Return:1 if alphabet and 0 otherwise
*/

int _isalpha(int c);
{
	char low, up;
	int letter =0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				letter = 1;
		}
	}
	return (letter);
}
