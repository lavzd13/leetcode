#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	// In this function we're just checking if the first and the last character are vowels.
	bool	isVowel(string str) {
		string vowels = "aeiou";

		if (find(vowels.begin(), vowels.end(), str[0]) != vowels.end() && find(vowels.begin(), vowels.end(), str.back()) != vowels.end())
			return true;
		else
			return false;
	}

	vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
		vector<int>	ans;
		// Initialize prefixSum vector with size + 1, because we one extra element which will be the first zero. Padd all values to be zero.
		vector<int>	prefixSum(words.size() + 1, 0);

		// Here we're calculating prefixSum of our words array. We will add 1 to the prefixSum if string is vowel if not than we'll keep previous value.
		// This will help us later when we're checking how many vowels strings we have in some range.
		// We will need just to subtract the last index + 1 (+1 becuase of the starting zero) from our start index and we will get exact amount of vowels strings in that range.
		for (int i = 0; i < words.size(); i++) {
			prefixSum[i + 1] = prefixSum[i] + (isVowel(words[i]) ? 1 : 0);
		}
		// This loop is going through queries.
		for (int i = 0; i < queries.size(); i++) {
			// Here we're pushing back the value which we get from: (endindex + 1) - startindex. This value will give us exact number of vowels string in the given range.
			ans.push_back(prefixSum[queries[i][1] + 1] - prefixSum[queries[i][0]]);
		}
		return ans;
	}
};

int	main() {
	vector<string> words = {"aba","bcb","ece","aa","e"};
	vector<vector<int>> queries = {{0,2},{1,4},{1,1}};

	Solution	sol;
	vector<int> res = sol.vowelStrings(words, queries);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
}