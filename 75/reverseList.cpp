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
	ListNode* reverseList(ListNode* head) {
		if (!head) return head;

		ListNode*	new_list = NULL;
		ListNode*	next;
		ListNode*	current = head;
		while (current) {
			next = current->next;
			current->next = new_list;
			new_list = current;
			current = next;
		}
		return new_list;
	}
};

int	main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(6);
	head->next->next->next->next->next->next = new ListNode(7);

	Solution	sol;
	ListNode*	p = sol.reverseList(head);

	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
	/* while (head != NULL) {
		ListNode* temp = head;
		head = head->next;
		delete	temp;
	} */
}