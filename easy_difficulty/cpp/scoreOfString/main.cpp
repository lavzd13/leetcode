#include <iostream>

using namespace std;

class Solution {
public:
	int scoreOfString(string s) {
		int	result = 0;
		for (int i = 0; i < s.size() - 1; i++)
			result += ((s[i] - s[i + 1]) < 0 ) ? (s[i] - s[i + 1]) * -1 : (s[i] - s[i + 1]);
		return result;
	}
};

int	main() {
	Solution	sol;

	cout << sol.scoreOfString("hello") << endl;
}