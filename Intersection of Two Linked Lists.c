/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	if (headA == NULL || headB == NULL)
		return NULL;
	struct ListNode* curA = headA;
	struct ListNode* curB = headB;
	while (curA != curB)
	{
		if (curA == NULL)
			curA = headB;
		else
			curA = curA->next;
		if (curB == NULL)
			curB = headA;
		else
			curB = curB->next;
	}
	return curA;
}