#include <iostream>


using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteMiddle(ListNode* head) {
		int			size = 0;
		ListNode*	temp = head;
		while (temp != NULL) {
			temp = temp->next;
			size++;
		}

		int			count = 0;
		ListNode*	temp_head;

		temp = head;
		temp_head = temp;
		while (temp != NULL) {
			if (count == ((size / 2) - 1))
				temp->next = temp->next->next;
			else
				temp = temp->next;
			count++;
		}
		return temp_head;
	}
};

int	main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(3);
	head->next->next = new ListNode(4);
	head->next->next->next = new ListNode(7);
	head->next->next->next->next = new ListNode(1);
	head->next->next->next->next->next = new ListNode(2);
	head->next->next->next->next->next->next = new ListNode(6);

	Solution	sol;
	ListNode*	p = sol.deleteMiddle(head);

	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
	cout << endl;
}