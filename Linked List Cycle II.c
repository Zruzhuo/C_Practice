/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head)
{
	if (head == NULL || head->next == NULL)
		return NULL;
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	struct ListNode* cur = head;
	while (fast->next != NULL && fast->next->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			while (cur != slow)
			{
				cur = cur->next;
				slow = slow->next;
			}
			return cur;
		}
	}
	return NULL;
}