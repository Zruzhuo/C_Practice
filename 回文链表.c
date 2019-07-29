/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		// write code here
		if (A == NULL)
		{
			return true;
		}
		ListNode* fast = A;
		ListNode* slow = A;
		ListNode* p;
		ListNode* q;
		ListNode* temp = NULL;
		while (fast->next && fast->next->next)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		slow = slow->next;
		while (slow != NULL)
		{
			p = slow;
			slow = slow->next;
			p->next = temp;
			temp = p;
		}
		while (temp != NULL)
		{
			if (temp->val != A->val)
			{
				return false;
			}
			temp = temp->next;
			A = A->next;
		}
		return true;
	}
};