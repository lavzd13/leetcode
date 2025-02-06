#include <iostream>
#include <vector>

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
		int pairSum(ListNode* head) {
			if (head->next->next == NULL)
				return head->val + head->next->val;

			ListNode	*slow = head, *fast = head;

			while (fast && fast->next) {
				slow = slow->next;
				fast = fast->next->next;
			}

			ListNode	*prev = nullptr;

			while (slow) {
				ListNode	*next = slow->next;
				slow->next = prev;
				prev = slow;
				slow = next;
			}

			ListNode	*first = head, *second = prev;
			int	max_pair = 0;

			while (second) {
				if (first->val + second->val > max_pair)
					max_pair = first->val + second->val;
				first = first->next;
				second = second->next;
			}
			return max_pair;
		}
};

int main() {
	/* ListNode *head = new ListNode(5);
	head->next = new ListNode(4);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(1);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(3); */

	int values[] = {47, 22, 81, 46, 94, 95, 90, 22, 55, 91, 6, 83, 49, 65, 10, 32, 41, 26, 83, 99, 14, 85, 42, 99, 89, 69, 30, 92, 32, 74, 9, 81, 5, 9};

	// Creating the linked list from the array
	ListNode *head = new ListNode(values[0]);
	ListNode *current = head;

	for (int i = 1; i < sizeof(values)/sizeof(values[0]); ++i) {
		current->next = new ListNode(values[i]);
		current = current->next;
	}

	Solution	sol;

	cout << sol.pairSum(head) << endl;
}
