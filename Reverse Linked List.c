/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL)
	{
		return head;
	}
	struct ListNode* ret;
	struct ListNode* cur = head;
	while (cur->next != NULL)
	{
		ret = cur->next;
		cur->next = ret->next;
		ret->next = head;
		head = ret;
	}
	return head;
}
