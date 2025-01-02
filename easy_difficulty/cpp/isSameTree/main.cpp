#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == nullptr && q == nullptr)
			return true;
		if (p == nullptr || q == nullptr)
			return false;
		return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
};

int main() {
	// p = [2, 2, 2, null, 2, null, null, 2]
    vector<int> p = {2, 2, 2, NULL, 2, NULL, NULL, 2};
    // q = [2, 2, 2, 2, null, 2, null]
    vector<int> q = {2, 2, 2, 2, NULL, 2, NULL};

    // Build tree p
    TreeNode* tree1 = new TreeNode(2);
    queue<TreeNode*> q1;
    q1.push(tree1);
    int index = 1;
    while (index < p.size()) {
        TreeNode* node = q1.front();
        q1.pop();

        if (p[index] != NULL) {
            node->left = new TreeNode(p[index]);
            q1.push(node->left);
        }
        index++;

        if (index < p.size() && p[index] != NULL) {
            node->right = new TreeNode(p[index]);
            q1.push(node->right);
        }
        index++;
    }

    // Build tree q
    TreeNode* tree2 = new TreeNode(2);
    queue<TreeNode*> q2;
    q2.push(tree2);
    index = 1;
    while (index < q.size()) {
        TreeNode* node = q2.front();
        q2.pop();

        if (q[index] != NULL) {
            node->left = new TreeNode(q[index]);
            q2.push(node->left);
        }
        index++;

        if (index < q.size() && q[index] != NULL) {
            node->right = new TreeNode(q[index]);
            q2.push(node->right);
        }
        index++;
    }
	Solution sol;

	if (sol.isSameTree(tree1, tree2))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}