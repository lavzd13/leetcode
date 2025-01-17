#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> zigzagTraversal(vector<vector<int>>& grid) {
		vector<int>	result;

		for (int i = 0; i < grid.size(); i++) {
			if (i % 2 != 0) {
				if (grid[i].size() % 2 == 0) {
					for (int j = grid[i].size() - 1; j >= 0; j-=2)
						result.push_back(grid[i][j]);
				}
				else {
					for (int j = grid[i].size() - 2; j >= 0; j-=2)
						result.push_back(grid[i][j]);
				}
			}
			else {
				for (int j = 0; j < grid[i].size(); j+=2)
					result.push_back(grid[i][j]);
			}
		}
		return result;
	}
};

int	main() {
	vector<vector<int>>	grid = {{1,2,1,3},{5,15,7,3},{10,4,14,12}};
	Solution			sol;

	vector<int>	res = sol.zigzagTraversal(grid);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
}