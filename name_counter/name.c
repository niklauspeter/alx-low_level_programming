#include <stdio.h>
#include "main.h"


int name_count(char *ptr)
{
	int count = 0;
	char *str = ptr;
	int i = 0;
	int len;

	len = lencounter(str);

	for(i = 0; i < len; i++)
	{
		if (str[i] == '-')
			count += 1;
	}
	return (count * 2);
}
