#include <stdio.h>
#include <stdbool.h>

int	check_if_double(char c, char *str, int index)
{
	for (int i = index; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (0);
	}
	return (1);
}

bool checkIfPangram(char* sentence)
{
	char	*alphabet = "abcdefghijklmnopqrstuvwxyz";
	int		j = 0;
	for (int i = 0; sentence[i] != '\0'; i++)
	{

		if (check_if_double(sentence[i], sentence, i + 1))
			j++;
	}
	if (j == 26)
		return (true);
	return(false);
}
