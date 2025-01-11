#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries {
	vector<vector<int>>	result;
public:
	SubrectangleQueries(vector<vector<int>>& rectangle) {
		result = rectangle;
	}

	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
		int	temp;

		while (row1 <= row2) {
			temp = col1;
			while (temp <= col2) {
				result[row1][temp] = newValue;
				temp++;
			}
			row1++;
		}
	}

	int getValue(int row, int col) {
		return result[row][col];
	}
};

int	main() {
	vector<vector<int>>	array = {{1,2,1},{4,3,4},{3,2,1},{1,1,1}};
	SubrectangleQueries* obj = new SubrectangleQueries(array);
	obj->updateSubrectangle(0,0,3,2,5);
	int param_2 = obj->getValue(0,0);
	cout <<param_2 << endl;
	obj->updateSubrectangle(3, 0, 3, 2, 10);
	cout << obj->getValue(3, 1);
}