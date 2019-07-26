/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x)
	{
		ListNode* little_head = (ListNode*)malloc(sizeof(ListNode));
		ListNode* big_head = (ListNode*)malloc(sizeof(ListNode));
		ListNode* little_tail = little_head;
		ListNode* big_tail = big_head;
		while (pHead != NULL)
		{
			if (pHead->val < x)
			{
				little_tail->next = pHead;
				little_tail = pHead;
				pHead = pHead->next;
			}
			else
			{
				big_tail->next = pHead;
				big_tail = pHead;
				pHead = pHead->next;
			}
		}
		big_tail->next = NULL;
		little_tail->next = big_head->next;
		ListNode* List = little_head->next;
		return List;
	}
};