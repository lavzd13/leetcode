#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
	string predictPartyVictory(string senate) {
		queue<int>	rad, dir;
		int			track = senate.length();
		for (int i = 0; i < senate.size(); i++) {
			if (senate[i] == 'D')
				dir.push(i);
			else
				rad.push(i);
		}
		while (!rad.empty() && !dir.empty()) {
			if (rad.front() < dir.front())
				rad.push(track++);
			else
				dir.push(track++);
			rad.pop(), dir.pop();
		}
		return (rad.empty() ? "Radiant" : "Dire");
	}
};

int	main() {
	Solution	sol;

	cout << sol.predictPartyVictory("DRRDRDRDRDDRDRDR") << endl;
}