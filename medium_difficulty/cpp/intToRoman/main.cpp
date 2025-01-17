#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
	string intToRoman(int num) {

		// Originally used maps, but they were using a lot of memory and increased runtime.

		/* std::map<int, string>	roman_letters = {
			{1, "I"},
			{4, "IV"},
			{5, "V"},
			{9, "IX"},
			{10, "X"},
			{40, "XL"},
			{50, "L"},
			{90, "XC"},
			{100, "C"},
			{400, "CD"},
			{500, "D"},
			{900, "CM"},
			{1000, "M"}
		}; */

		/* for (map<int, string>::reverse_iterator i = roman_letters.rbegin(); i != roman_letters.rend(); i++) {
			while (num - i->first >= 0) {
				res.append(i->second);
				num -= i->first;
			}
			if (num == 0)
				return res;
		} */

		// Using vectors I decreased memory usage by 4+MB and improved runtime.
		// Pair in vectors works completely same as map.

		string						res = "";
		vector<pair<int, string>>	roman = {
			{1, "I"},
			{4, "IV"},
			{5, "V"},
			{9, "IX"},
			{10, "X"},
			{40, "XL"},
			{50, "L"},
			{90, "XC"},
			{100, "C"},
			{400, "CD"},
			{500, "D"},
			{900, "CM"},
			{1000, "M"}
		};
		for (int i = roman.size() - 1; i >=0; i--) {
			while (num - roman[i].first >= 0) {
				res.append(roman[i].second);
				num -= roman[i].first;
			}
			if (num == 0)
				return res;
		}
		return "";
	}
};

int	main() {
	Solution	sol;
	cout << sol.intToRoman(9) << endl;
}