#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	public:
		int maxProfit(vector<int>& prices) {
			int	min = 99999999;
			int	max_profit = 0;
			for (int i = 0; i < prices.size(); i++) {
				if (prices[i] < min)
					min = std::min(prices[i], min);
				max_profit = max(prices[i] - min, max_profit);
			}
			return max_profit;
		}
};

int main() {
	Solution	sol;

	vector<int> arr = {7,1,5,3,6,4};
	cout << sol.maxProfit(arr) << endl;
}