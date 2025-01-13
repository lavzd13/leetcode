#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> asteroidCollision(vector<int>& asteroids) {
		vector<int>	res;
		stack<int>	stack_aster;

		for (int i = 0; i < asteroids.size(); i++) {
			if (asteroids[i] > 0)
				stack_aster.push(asteroids[i]);
			else {
				while (!stack_aster.empty() && stack_aster.top() > 0 && stack_aster.top() < abs(asteroids[i])) {
					stack_aster.pop();
				}
				if (stack_aster.empty() || stack_aster.top() < 0)
					stack_aster.push(asteroids[i]);
				if (!stack_aster.empty() && stack_aster.top() == abs(asteroids[i]))
					stack_aster.pop();
			}
		}
		while (!stack_aster.empty()) {
			res.push_back(stack_aster.top());
			stack_aster.pop();
		}
		reverse(res.begin(), res.end());
		return res;
	}
};

int	main() {
	vector<int>	asteroids = {1,-1,-2,-2};
	Solution	sol;

	vector<int> res = sol.asteroidCollision(asteroids);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
}