#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minimizeXor(int num1, int num2) {
		int	result = 0;
		int	bits = __builtin_popcount(num2);

		for (int i = 31; i >= 0 && bits; i--) {
			if ((num1 & (1 << i)) == 0) {
				bits--;
				result |= (1 << i);
			}
		}
		for (int i = 0; i < 32 && bits; i++) {
			if ((result & (1 << i)) == 0) {
				bits--;
				result |= (1 << i);
			}
		}
		return result;
	}
};

int	main() {
	Solution	sol;

	sol.minimizeXor(25, 72);
}