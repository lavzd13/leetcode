#include <stdio.h>
#include <stdlib.h>

int*	plusOne(int* digits, int digitsSize, int* returnSize)
{
	digits[digitsSize - 1]++;
	int	i;
	for (i = digitsSize - 1; i > 0;i--)
	{
		if (digits[i] > 9)
		{
			int	carry = 1;
			digits[i] = 0;
			digits[i - 1] += carry;
		}
	}
	if (digits[0] > 9)
	{
		digits = realloc(digits, (digitsSize + 1) * sizeof(int));
		for (int j = digitsSize; j > 0;j--)
			digits[j] = digits[j - 1];
		digits[0] = 1;
		digitsSize++;
		digits[1] = 0;
	}
	*returnSize = digitsSize;
	return (digits);
}