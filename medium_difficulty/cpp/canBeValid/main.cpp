#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	bool canBeValid(string s, string locked) {
		if (s.length() % 2 != 0)
			return false;

		int	count_open = 0;
		int	count_closed = 0;

		// Looping from start to the end and checking if all parenthesis have their own match.
		for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--) {
			if (locked[i] == '0' || s[i] == '(')
				count_open++;
			else
				count_open--;
			if (locked[j] == '0' || s[j] == ')')
				count_closed++;
			else
				count_closed--;
			if (count_open < 0 || count_closed < 0)
				return false;
		}
		return true;
	}
};

int	main() {
	string	s = "())()))()(()(((())(()()))))((((()())(())";
	string	locked = "1011101100010001001011000000110010100101";
	Solution	sol;

	if (sol.canBeValid(s, locked))
		cout << "True" << endl;
	else
		cout << "False" << endl;
}