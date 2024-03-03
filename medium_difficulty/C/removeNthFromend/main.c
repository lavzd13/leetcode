#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	int				len = 0;
	struct ListNode *temp;

	if (head->next == NULL && n == 1)
		return (head = NULL);
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	temp = head;
	if (n == len)
		temp = head->next;
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (i == len - n - 1)
			{
				head->next = head->next->next;
				break ;
			}
			head = head->next;
		}
	}
	return (temp);
}
