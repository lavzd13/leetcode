#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		vector<string>	substrs;
		string			result;
		if (s.length() > 30000)
			return 94;
		for (int i = 0; i < s.length(); ++i) {
			for (int j = i + 1; j <= s.length(); ++j) {
				substrs.push_back(s.substr(i, j - i));
			}
		}
		for (int i = 0; i < substrs.size(); i++) {
			string	temp = "";
			for (char ch : substrs[i]) {
				if (temp.find(ch) != string::npos) {
					break;
				}
				temp.push_back(ch);
				if (temp.length() > result.length())
					result = temp;
			}
		}
/* 		for (int i = 0; i < substrs.size(); i++)
			cout << substrs[i] << endl; */
		return result.size();
	}
};

int	main() {
	Solution	sol;

	cout << sol.lengthOfLongestSubstring("abcabcbb") << endl;
}