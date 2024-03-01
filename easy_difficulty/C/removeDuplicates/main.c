#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
	for (int j = 0; j < numsSize - 1; j++)
	{
		if (nums[j] == nums[j + 1])
			nums[j] = 1000;
	}
	int	size = 0;
	for (int i = 0; i < numsSize;i++)
	{
		if (nums[i] != 1000)
			nums[size++] = nums[i];
	}
	for (int i = 0; i < numsSize; i++)
		printf("%d\n", nums[i]);
	return (size);
}

/* int removeDuplicates(int* nums, int numsSize)
{
	int	size = 0;
	int j = 0;
	while (j < numsSize - 1)
	{
		if (nums[j] == nums[j + 1])
			nums[j] = 1000;
		j++;
	}
	j = 0;
	while (j < numsSize)
	{
		if (nums[j] != 1000)
			nums[size++] = nums[j];
		j++;
	}
	return (size);
} */
