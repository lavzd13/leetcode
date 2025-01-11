#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool canConstruct(string s, int k) {

		if (s.length() < k)
			return false;

		unordered_map<char, int>	char_freq;

		for (char ch : s) {
			char_freq[ch]++;
		}

		int	odd_count = 0;

		for (unordered_map<char, int>::iterator i = char_freq.begin(); i != char_freq.end(); i++) {
			if (i->second % 2 != 0)
				odd_count++;
		}
		if (odd_count > k)
			return false;
		return true;
	}
};

int	main() {
	string	s = "annabelle";
	Solution	sol;

	if (sol.canConstruct(s, 2))
		cout << "true" << endl;
	else
		cout << "false" << endl;
}