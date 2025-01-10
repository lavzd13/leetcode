#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>>	result(numRows);

		for (int i = 0; i < numRows; i++) {
			result[i].resize(i + 1);
			result[i][0] = 1;
			result[i][i] = 1;
			for (int columns = 1; columns < i; columns++) {
				result[i][columns] = (result[i - 1][columns - 1] + result[i - 1][columns]);
			}
		}
		/* for (int i = 0; i < result.size(); i++) {
			for (int j = 0; j < result[i].size(); j++)
				cout << result[i][j] << " ";
			cout << endl;
		} */
		return result;
	}
};

int	main() {
	Solution	sol;

	sol.generate(5);
}