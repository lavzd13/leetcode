#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int largestAltitude(vector<int>& gain) {
		vector<int>	res(gain.size() + 1, 0);

		for (int i = 0; i < gain.size(); i++) {
			res[i + 1] = res[i] + gain[i];
		}
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << endl;
		}
		return *(max_element(res.begin(), res.end()));
	}
};

int	main() {
	vector<int>	gain = {-5,1,5,0,-7};
	Solution	sol;

	cout << sol.largestAltitude(gain) << endl;
}