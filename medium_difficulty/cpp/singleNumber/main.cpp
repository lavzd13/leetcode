#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int	result = 0;
		for (int i = 0; i < nums.size(); i++) {
			result ^= nums[i];
		}
		return result;
	}
};

int	main() {
	vector<int>	nums = {2,2,1};

	Solution	sol;
	cout << sol.singleNumber(nums) << endl;
}