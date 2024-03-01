#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle)
{
	int i = 0;
	while (*haystack)
	{
		if (!strncmp(haystack++, needle, strlen(needle)))
			return (i);
		i++;
	}
	return (-1);
}
