#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findPeakElement(vector<int>& nums) {
		//int index = std::find(nums.begin(), nums.end(), *max_element(nums.begin(), nums.end())) - nums.begin(); // one liner
		int	len = nums.size();

		if (len == 1) return 0;
		if (nums[0] > nums[1]) return 0;
        if (nums[len-1] > nums[len-2]) return len-1;

		int	low = 0;
		int	high = len - 1;

		while (low != high) {
			int	mid = low + (high - low) / 2;
			if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
				return mid;
			else if (nums[mid] < nums[mid + 1])
				low = mid + 1;
			else if (nums[mid] < nums[mid - 1])
				high = mid - 1;
		}
		return -1;
	}
};