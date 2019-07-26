/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
*/
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}
		if (pHead->next == NULL)
		{
			return pHead;
		}
		ListNode* Head = (ListNode*)malloc(sizeof(ListNode));
		Head->next = pHead;
		ListNode* prev = Head;
		ListNode* cur = pHead;
		ListNode* next = pHead->next;
		while (next != NULL)
		{
			while (next != NULL && cur->val == next->val)
			{
				next = next->next;
			}
			if (cur->next != next)
			{
				while (cur != next)
				{
					prev->next = cur->next;
					free(cur);
					cur = prev->next;
				}
				if (next != NULL)
					next = next->next;
			}
			else
			{
				prev = cur;
				next = next->next;
				cur = cur->next;
			}
		}
		ListNode* head = Head->next;
		free(Head);
		Head = NULL;
		return head;
	}
};