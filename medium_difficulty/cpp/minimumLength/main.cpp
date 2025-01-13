#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int minimumLength(string s) {
		int							res = 0;
		unordered_map<char, int>	chars;

		// Putting chars into unordered_map.
		for (char ch : s) {
			chars[ch]++;
		}
		// Checking if our count of char is greater than 3 that means that we can perform operations on that char.
		// In the loop we're checking if the number of occurrences is even or odd number.
		// If it's even that after operations it will always have 2 chars left and if it's odd it will always leave one char after all operations.
		// If it's lower that 3 we're just adding it to the string length.
		for (unordered_map<char, int>::iterator i = chars.begin();i != chars.end(); i++) {
			if (i->second >= 3) {
				if (i->second % 2 != 0)
					res += 1;
				else
					res += 2;
			}
			else
				res += i->second;
		}
		return res;
	}
};

int	main() {
	Solution	sol;

	cout << sol.minimumLength("ucvbutgkohgbcobqeyqwppbxqoynxeuuzouyvmydfhrprdbuzwqebwuiejoxsxdhbmuaiscalnteocghnlisxxawxgcjloevrdcj") << endl;
}