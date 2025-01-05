#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	string shiftingLetters(string s, vector<vector<int>>& shifts) {
		vector<int>	temp(s.size() + 1, 0);
		// Loop in which we'll hold direction values
		for (int i = 0; i < shifts.size(); i++) {
			// If we're shifting forward we're setting the start index as 1 and end+1 index as -1
			// Between them space will be padded by zeros.
			if (shifts[i].back() == 1) {
				temp[shifts[i][0]] += 1;
				temp[shifts[i][1] + 1] -= 1;
			}
			// Same logic for backwards just instead of 1 and -1 we're going with -1 and 1.
			else {
				temp[shifts[i][0]] -= 1;
				temp[shifts[i][1] + 1] += 1;
			}
		}
		// Loop for shifting chars.
		for (int i = 0, shift = 0; i < s.size(); i++) {
			// Incrementing shift value everytime if we have more overlapping shifts.
			shift += temp[i];
			// In this calculation we will get exact number which we need for incrementing 'a' later.
			// You can think about 'a' as base case and we use it for calculation and then later we add that value to it.
			int	newChar = (s[i] - 'a' + shift) % 26;
			// This is handling for negatives, becuase we will have negatives when we're going backwards.
			if (newChar < 0)
				newChar += 26;
			// As previously said just adding newChar to the base case 'a' so that we can get correct character.
			s[i] = 'a' + newChar;
		}
		return s;
	}
};

int	main() {
	string	s = "xuwdbdqik";
	vector<vector<int>> temp = {{4,8,0},{4,4,0},{2,4,0},{2,4,0},{6,7,1},{2,2,1},{0,2,1},{8,8,0},{1,3,1}};
	Solution	sol;
	sol.shiftingLetters(s, temp);
}