#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head)
{
	int				len = 0;
	struct ListNode	*temp;

	temp = head;
	while (temp != NULL)
		temp = temp->next, len++;
	for (int i = 0; i < len / 2; i++)
		head = head->next;
	return (head);
}