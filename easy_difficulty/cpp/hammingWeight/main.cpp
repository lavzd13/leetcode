#include <iostream>

using namespace std;

class Solution {
public:
	int hammingWeight(int n) {
		int	count = 0;

		while (n) {
			count += n & 1;
			n >>=1;
		}
		return count;
	}
};

int	main(void) {
	Solution	sol;

	cout << sol.hammingWeight(5);
}