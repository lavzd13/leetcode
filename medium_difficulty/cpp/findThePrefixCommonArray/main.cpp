#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
		vector<int>	frequency(A.size() + 1, 0);
		vector<int>	result;

		for (int i = 0, track = 0; i < A.size(); i++) {
			frequency[A[i]]++;
			frequency[B[i]]++;
			if (A[i] != B[i]) {
				if (frequency[A[i]] == 2)
					track++;
				if (frequency[B[i]] == 2)
					track++;
			}
			else
				track++;
			result.push_back(track);
		}
		return result;
	}
};

int	main(void) {
	vector<int>	A = {2,3,1};
	vector<int>	B = {3,1,2};

	Solution	sol;
	vector<int>	result = sol.findThePrefixCommonArray(A, B);
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
}