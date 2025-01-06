#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		vector<int>	res(nums.size(), 0);
		vector<int>	right(nums.size(), 0);

		for (int i = 0; i < nums.size() - 1; i++) {
			res[i + 1] = res[i] + nums[i];
		}
		for (int i = nums.size() - 1; i > 0; i--) {
			right[i - 1] = right[i] + nums[i];
		}
		for (int i = 0; i < res.size(); i++) {
			if (res[i] - right[i] == 0)
				return i;
		}
		return -1;
	}
};

int	main() {
	vector<int>	nums = {-1,-1,-1,1,1,1};
	Solution	sol;

	cout << sol.pivotIndex(nums) << endl;
}