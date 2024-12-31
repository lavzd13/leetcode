#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i = 0; i < n; i++) {
        nums1[i + m] = nums2[i];
    }
    qsort(nums1, nums1Size, sizeof(nums1[0]), comp);
	for (int i = 0; i < nums1Size; i++) {
		printf("%d ", nums1[i]);
	}
	printf("\n");
}

int main() {
	int	nums1[] = {1,2,3,0,0,0};
	int	nums2[] = {2,5,6};
	int	nums11[] = {1};
	int	nums21[] = {};

	merge(nums1, 6, 3, nums2, 3, 3);
}