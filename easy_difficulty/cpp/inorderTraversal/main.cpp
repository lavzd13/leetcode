#include <iostream>
#include <vector>

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
	void	safe_push(TreeNode* root, vector<int>& temp) {
		if (root == nullptr)
			return;
		safe_push(root->left, temp);
		cout << root->val << " ";
		temp.push_back(root->val);
		safe_push(root->right, temp);
	}
	// So here is the main function in which we call safe_push() function.
	// We call safe_push() because I was having issue with push the values in the vector
	// in original function because on every recursive call vector will be created and that
	// was causing to hold only the root value.
	// I tried using static but if we had more calls to our function for different trees
	// than the values of the previous tree would be saved.
	// So in this final case we enter inorderTraversal() function and then go to the safe_push() where we
	// perform recursive calls and in which we do not create new vector for every call and at the end
	// we have correct value inside our vector.
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int>	temp;
		safe_push(root, temp);
		return temp;
	}
};

int main() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->right = new TreeNode(6);
	Solution sol;

	vector<int> temp = sol.inorderTraversal(root);
	for (vector<int>::iterator start = temp.begin(); start < temp.end(); start++) {
		cout << *start << " ";
	}
}