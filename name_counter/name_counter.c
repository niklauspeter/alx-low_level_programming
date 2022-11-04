#include <stdio.h>
#include "main.h"


int lencounter(char *st)
{
	int len = 0;
	char *ptr = st;

	while (*ptr)
	{
		len += 1;
		ptr++;
	}
	return (len);
}
