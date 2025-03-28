#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		vector<string> fizzBuzz(int n) {
			vector<string>	res;
			for (int i = 1; i <= n; i++) {
				if (i % 3 == 0 && i % 5 == 0)
					res.push_back("FizzBuzz");
				else if (i % 3 == 0)
					res.push_back("Fizz");
				else if (i % 3 == 0)
					res.push_back("Buzz");
				else
					res.push_back(to_string(i));
			}
			return res;
		}
};

int	main(int argc, char **argv) {
	if (argc != 2) {
		cerr << "Provide one number to program." << endl;
		return 1;
	}
	Solution	sol;

	vector<string>	test = sol.fizzBuzz(atoi(argv[1]));
	for (int i = 0; i < test.size(); i++)
		cout << test[i] << " ";
	cout << endl;
}