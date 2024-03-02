#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
	int	*result = malloc(numsSize * sizeof(int));
	int	j = 0;
	*returnSize = numsSize;
	for (int i = 0; i < numsSize; i++)
		result[j++] = nums[i]*nums[i];
	qsort(result, numsSize, sizeof(int),compare);
	return (result);
}
