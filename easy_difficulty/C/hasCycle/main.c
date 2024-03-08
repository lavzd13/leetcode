#include <stdio.h>
#include <stdbool.h>


struct ListNode {
	int val;
	struct ListNode *next;
};

bool hasCycle(struct ListNode *head)
{
	while (head != NULL)
	{
		head->val = 100001;
		head = head->next;
		if (head->val == 100001)
			return (true);
	}
	return (false);
}