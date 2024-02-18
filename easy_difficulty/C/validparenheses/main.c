#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s)
{
	char	*stack = s;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '(')
			*stack++ = ')';
		else if (s[i] == '{')
			*stack++ = '}';
		else if (s[i] == '[')
			*stack++ = ']';
		else if (stack == s || s[i] != *--stack)
			return (false);
	}
	return (stack == s);
}
