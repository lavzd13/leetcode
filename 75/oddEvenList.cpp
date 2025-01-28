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
	ListNode* oddEvenList(ListNode* head) {
		if (!head || !head->next) return head;

		ListNode*	even = head;
		ListNode*	odd = head->next;

		ListNode*	odd_head = odd;
		while (even != NULL && even->next != NULL && odd != NULL && odd->next != NULL) {
			even->next = even->next->next;
			even = even->next;

			odd->next = odd->next->next;
			odd = odd->next;
		}
		even->next = odd_head;
		return head;
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
	ListNode*	p = sol.oddEvenList(head);

	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
	while (head != NULL) {
		ListNode* temp = head;
		head = head->next;
		delete	temp;
	}
}