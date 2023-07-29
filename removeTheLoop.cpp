#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* RemoveCycle(ListNode* head)
{
	ListNode *s = head;
	ListNode *f = head;
	while(f and f->next)
	{
		s = s->next;
		f = f->next->next;
		if(s == f)
		{
			s = head;
			break;
		}
	}
	if(s == head)
	{
		while(s->next != f->next)
		{
			s = s->next;
			f = f->next;
		}
		f->next = NULL;
	}
	return head;
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
	head = RemoveCycle(head);
	while(head)
	{
		cout<<head->val<<endl;
		head = head->next;
	}
 	return 0;
}