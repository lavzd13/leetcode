#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> minOperations(string boxes) {
		vector<int>	indexs(boxes.size(), 0);

		// Looping from left to right and calculating how many moves do we need to bring all encountered balls to the current index.
		for (int i = 0, balls = 0, moves = 0; i < boxes.size(); i++) {
			// Incrementing moves by the number of balls because for every step that we make we will move all the balls that we have at the moment.
			moves += balls;
			if (boxes[i] == '1') {
				//For every encountered ball we're incrementing balls count.
				balls++;
			}
			// We're saving moves to the current index i. So that will tell us how many moves do we need to make for every encountered ball so that all balls can be at index i.
			indexs[i] = moves;
		}
		// Looping from right to left and doing the same thing like in the loop before. We're going from the last index up until the 0.
		for (int i = boxes.size() - 1, balls = 0, moves = 0; i >= 0; i--) {
			moves += balls;
			if (boxes[i] == '1')
				balls++;
			// Here we're not overwriting values from indexs. We are adding moves so that we can have final number of moves.
			indexs[i] += moves;
		}
		return indexs;
	}
};

int	main() {
	string		boxes = "001011";
	Solution	sol;

	sol.minOperations(boxes);
}