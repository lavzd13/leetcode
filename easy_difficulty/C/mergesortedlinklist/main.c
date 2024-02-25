#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode	*result = malloc(sizeof(struct ListNode));
	struct ListNode	*head = result;

	if (!list1 && !list2)
		return (NULL);
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->val < list2->val)
		{
			result->val = list1->val;
			list1 = list1->next;
		}
		else
		{
			result->val = list2->val;
			list2 = list2->next;
		}
		result->next = malloc(sizeof(struct ListNode));
		result = result->next;
	}
	while (list1 != NULL)
	{
		result->val = list1->val;
		list1 = list1->next;
		if (list1 != NULL) {
			result->next = malloc(sizeof(struct ListNode));
			result = result->next;
		}
	}
	while (list2 != NULL)
	{
		result->val = list2->val;
		list2 = list2->next;
		if (list2 != NULL) {
			result->next = malloc(sizeof(struct ListNode));
			result = result->next;
		}
	}
	result->next = NULL;
	return (head);
}
