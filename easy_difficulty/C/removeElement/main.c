#include <stdio.h>

int removeElement(int* nums, int numsSize, int val)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == val)
			nums[i] = -1;
	}
	int	size = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != -1)
			nums[size++] = nums[i];
	}
	return (size);
}
