#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "am a good boy -and i can eat - chai";
	int count;

	count = name_count(str);
	printf("%d\n", count);
	return (0);
}
