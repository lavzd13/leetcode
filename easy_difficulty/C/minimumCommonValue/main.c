#include <stdio.h>
#include <limits.h>

int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	int	i = 0;
	int	j = 0;
	int	res = INT_MAX;

	while (i < nums1Size && j < nums2Size)
	{
		if (nums1[i] == nums2[j] && nums1[i] < res)
			res = nums1[i];
		else if (nums1[i] < nums2[j])
			i++;
		else
			j++;
	}
	if (res != INT_MAX)
		return (res);
	return (-1);
}