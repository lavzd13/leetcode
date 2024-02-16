#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

//less runtime but slightly more memory usage
bool divideArray(int* nums, int numsSize)
{
	if (numsSize % 2 != 0)
		return (false);
	int	count = 0;
	int i = 0;
	qsort(nums, numsSize, sizeof(int), cmpfunc);
	while (i < numsSize - 1)
	{
		if (nums[i] == nums[i + 1])
			count++, i+=2;
		else
			i++;
	}
	if (count != numsSize/2)
		return (false);
	return (true);
}
//more runtime +40ms and slightly less memory usage
bool divideArray_2(int* nums, int numsSize)
{
	if (numsSize % 2 != 0)
		return (false);
	int	count = 0;
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = 0; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
				count++;
		}
		if (count % 2 != 0)
			return (false);
	}
	if (count % 2 == 0 && count)
		return (true);
	return (false);
}

