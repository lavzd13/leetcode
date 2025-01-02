#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	int distributeCandies(vector<int>& candyType) {
		int	types = 1;
		std::map<int, int> occurrences;

		for (int num: candyType) {
			occurrences[num]++;
		}
		if (candyType.size() / 2 <= occurrences.size())
			return candyType.size() / 2;
		return occurrences.size();
	}
};

int main() {
	vector<int>	candyType = {1,3,1,3,1,3};

	Solution	sol;

	cout << sol.distributeCandies(candyType) << endl;
}