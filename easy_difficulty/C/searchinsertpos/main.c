#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target)
{
	int	i;

	if (target < nums[0])
		return (0);
	if (numsSize == 1)
	{
		if (target > nums[0])
			return (1);
		return (0);
	}
	for (i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] == target)
			return (i);
		if (nums[i] < target && nums[i + 1] > target)
			return (i + 1);
	}
	if (target == nums[numsSize - 1])
		return (numsSize - 1);
	if (target > nums[numsSize - 1])
		return (numsSize);
	else
		return (0);
}