#include <stdio.h>

int	check_freq(int *nums, int i, int numsSize, int num)
{
	int	freq = 0;

	while (i < numsSize)
	{
		if (nums[i] == num)
			freq++;
	}
	return (freq);
}

int maxFrequencyElements(int* nums, int numsSize)
{
	int	res = 0;
	int	max_freq = 0;

	for (int i = 0; i < numsSize; i++)
	{
		int	temp = check_freq(nums, i, numsSize, nums[i]);
		if (temp > max_freq)
			max_freq = temp;
	}
	for (int i = 0; i < numsSize; i++)
	{
		if (check_freq(nums, i, numsSize, nums[i]) == max_freq)
			res++;
	}
	return (res);
}