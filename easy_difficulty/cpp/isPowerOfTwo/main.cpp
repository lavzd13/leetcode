#include <iostream>

using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		// Even smarter approach which I saw is instead of __builtin_popcount use: (n & (n - 1))!
		return (n > 0 && __builtin_popcount(n) == 1);
	}
};

int	main() {
	Solution	sol;

	cout << sol.isPowerOfTwo(6) << endl;
}