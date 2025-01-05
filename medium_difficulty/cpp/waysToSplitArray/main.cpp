#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int waysToSplitArray(vector<int>& nums) {
		vector<int>	prefixSum(nums.size() + 1);
		int			res = 0;

		for (int i = 0; i < nums.size(); i++) {
			prefixSum[i + 1] += prefixSum[i] + nums[i];
		}
		for (int i = 0; i < prefixSum.size() - 2; i++) {
			if (prefixSum[i + 1] >= (prefixSum[prefixSum.size() - 1] - prefixSum[i + 1]))
				res++;
		}
		return res;
	}
};

int	main() {
	vector<int>	nums = {10,4,-8,7};

	Solution	sol;
	sol.waysToSplitArray(nums);
}