#include <stdio.h>
#include <string.h>

char* maximumOddBinaryNumber(char* s)
{
	int	count = 0;
	int	len = strlen(s);

	for (int i = 0; s[i]; i++)
	{
		if (s[i] == '1')
			count++;
	}
	int	i = 0;
	while (i < len)
	{
		if (count > 1)
		{
			s[i] = '1';
			count--;
		}
		else
			s[i] = '0';
		i++;
	}
	s[i - 1] = '1';
	s[i] = '\0';
	return (s);
}
