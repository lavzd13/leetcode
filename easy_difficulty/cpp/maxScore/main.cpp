#include <iostream>

using namespace std;

class Solution {
public:
	int maxScore(string s) {
		int		result = 0;
		int		left_sum = 0;
		int		right_sum;

		size_t	start;
		// Loop through the whole string until the last char(not including it).
		for (start = 0; start <= s.length() - 2; start++) {
			// We are incrementing our left_sum for every zero encountered.
			// We are doing this because we are gonna iterate from left to right.
			// So we will not decrease the left_sum just increase it because we're just adding more chars.
			if (s[start] == '0')
				left_sum += 1;
			size_t	end = s.length() - 1;
			right_sum = 0;
			// In this loop we're looking for the ones. From back until our current left char.
			// Before every entry in the loop we're reseting the count of the right_sum,
			// becuase we're gonna go from the end every time we enter the loop.
			while (end > start) {
				// If we encounter 1's we increment right sum.
				if (s[end] == '1')
					right_sum += 1;
				end--;
			}
			// Here we're the current sum of left and right is greater than our current highest.
			// We could use max() function here but it will cost us some time.
			if (left_sum + right_sum > result)
				result = left_sum + right_sum;
		}
		return result;
	}
};

int main() {
	string test = "0101010";

	Solution sol;

	cout << sol.maxScore(test) << endl;
}