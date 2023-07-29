#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
bool hasCycle(ListNode *head)
{
	ListNode *s = head;
	ListNode *f = head;
	while(f and f->next)
	{
		s = s->next;
		f = f->next->next;
		if(s == f)
			return true;
	}
	return false;
}
int main()
{
	ListNode* head = new ListNode(1);
	ListNode* curr = head;
	curr->next = new ListNode(2);
	curr = curr->next;
	curr->next = new ListNode(3);
	ListNode *l = curr;
	curr = curr->next;
	curr->next = new ListNode(4);
	curr = curr->next;
	curr->next = new ListNode(5);
	curr = curr->next;
	curr->next = new ListNode(6);
	curr = curr->next;
	curr->next = l;

	cout<<hasCycle(head)<<endl;
	return 0;
}