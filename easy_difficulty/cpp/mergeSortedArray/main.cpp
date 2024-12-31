#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	void printVector(vector<int>& vec) {
		for (std::vector<int>::iterator i = vec.begin(); i < vec.end(); i++) {
			cout << *i << " ";
		}
		cout << endl;
	}

	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int>	temp(m + n);
		std::merge(nums1.begin(), nums1.begin() + m, nums2.begin(), nums2.begin() + n, temp.begin());
		std::sort(temp.begin(), temp.end());
		nums1 = temp;
		printVector(temp);
		printVector(nums1);
	}

	void mergeLeet(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0; i < n; i++) {
			nums1[i + m] = nums2[i];
		}
		sort(nums1.begin(), nums1.end());
		printVector(nums1);
	}
};

int main() {
	vector<int> nums1 = {1,2,3,0,0,0};
	vector<int> nums2 = {2,5,6};
	vector<int> test1 = {1};
	vector<int> test2 = {};
	Solution sol;

	sol.merge(test1, 1, test2, 0);
}