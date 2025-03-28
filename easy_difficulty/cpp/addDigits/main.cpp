#include <iostream>

using namespace std;

class Solution {
	public:
		// Just finding the digital root of the number. We can find digital root of any number just simply dividing it by 9.
		// Digital root of numbers can go from 1 to 9. Digital root is also know as "seed".
		int addDigits(int num) {
			if (num % 9 == 0 && num != 0)
				return 9;
			return num % 9;
		}
};

int	main(int argc, char **argv) {
	if (argc != 2) {
		cerr << "Provide a number for the program" << endl;
		return 1;
	}
	Solution	sol;

	cout << sol.addDigits(atoi(argv[1])) << endl;
}