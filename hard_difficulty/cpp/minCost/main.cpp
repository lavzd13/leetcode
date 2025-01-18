#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>

using namespace std;

class Solution {
public:

	int minCost(vector<vector<int>>& grid) {
		int rows = grid.size();
		int cols = grid[0].size();
		int dx[] = {0, 0, 1, -1};
		int dy[] = {1, -1, 0, 0};

		vector<vector<int>> cost(rows, vector<int>(cols, INT_MAX));
		deque<pair<int, int>> dq;

		dq.push_front({0, 0});
		cost[0][0] = 0;

		while (!dq.empty()) {
			auto [x, y] = dq.front();
			dq.pop_front();

			if (x == rows - 1 && y == cols - 1)
				return cost[x][y];

			for (int dir = 1; dir <= 4; dir++) {
				int nx = x + dx[dir - 1];
				int ny = y + dy[dir - 1];

				if (nx >= 0 && ny >= 0 && nx < rows && ny < cols) {
					int new_cost = cost[x][y] + (grid[x][y] != dir);

					if (new_cost < cost[nx][ny]) {
						cost[nx][ny] = new_cost;

						if (grid[x][y] == dir)
							dq.push_front({nx, ny});
						else
							dq.push_back({nx, ny});
					}
				}
			}
		}
		return -1;
	}
};

int	main() {
	vector<vector<int>>	grid = {{1,1,1,1},{2,2,2,2},{1,1,1,1},{2,2,2,2}};
	Solution			sol;

	cout << sol.minCost(grid) << endl;
}