#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool doesValidArrayExist(vector<int>& derived) {
		int	xor_check = 0;
		int	n = derived.size();

		for (int i = 0; i < n; i++)
			xor_check ^= derived[i];
		return xor_check == 0;
	}
};

int	main() {
	vector<int>	test = {1,0,1,1};
	Solution	sol;

	sol.doesValidArrayExist(test);
}