#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
		unordered_map<char, int>	frequency;
		unordered_map<char, int>	charCount;

		for (const string& str : words2) {

			charCount.clear();

			for (char ch : str) {
				charCount[ch]++;
			}

			for (const auto& pair : charCount) {
				frequency[pair.first] = max(frequency[pair.first], pair.second);
			}
		}

		words2.clear();

		unordered_map<char, int>	check_freq;
		int							chars_check;

		for (string& str : words1) {

			chars_check = 0;
			check_freq.clear();

			for (char ch : str) {
				check_freq[ch]++;
				auto it = frequency.find(ch);
				if (it != frequency.end()) {
					if (check_freq[ch] == it->second) {
						chars_check++;
					}
				}
			}
			if (chars_check == frequency.size())
				words2.push_back(str);
		}

		return words2;
	}
};

int	main() {
	vector<string>	words1 = {"amazon","apple","facebook","google","leetcode"};
	vector<string>	words2 = {"lo","eo"};
	Solution		sol;

	vector<string> result = sol.wordSubsets(words1, words2);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
}