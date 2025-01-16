#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
		int			xor1 = 0, xor2 = 0;

		// Calculating XOR for all nums1
		for (int num : nums1)
			xor1 ^= num;
		// Calculating XOR for all nums2
		for (int num : nums2)
			xor2 ^= num;

		// If nums2 is odd we are including xor1, because if it's even then all number from nums1 will be xor'd even times
		// resulting in 0. If we have array[1,2,3] and even_array[4,5] then every digit form array will be xored 2 times because it's even number.
		// If we XOR value two times it will result in zero so our whole array will result in zero because every digit in it will XOR'D two times.
		// This logic is same for nums1 array if it's even then we cancel xor2.
		// If both array are odd then we include xor1 and xor2 because non of these two will result in zero, because it will XOR'd odd times.
		return (nums2.size() % 2 ? xor1 : 0) ^ (nums1.size() % 2 ? xor2 : 0);
	}
};

int	main(void) {
	vector<int>	nums1 = {1};
	vector<int>	nums2 = {};
	Solution	sol;

	cout << sol.xorAllNums(nums1, nums2) << endl;
}