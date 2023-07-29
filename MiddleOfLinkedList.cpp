#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* middleNode(ListNode* head) {
        ListNode *s = head;
        ListNode *f = head;
        while(f and f->next)
        {
        	s = s->next;
        	f = f->next->next;
        }
        return s;
    }
int main()
{
	ListNode* head = new ListNode(1);
	ListNode* curr = head;
	curr->next = new ListNode(2);
	curr = curr->next;
	curr->next = new ListNode(3);
	curr = curr->next;
	curr->next = new ListNode(4);
	curr = curr->next;
	curr->next = new ListNode(5);
	curr = curr->next;
	curr->next = new ListNode(6);
	curr = curr->next;
	ListNode *ans = middleNode(head);
	cout<<ans->val<<endl;
	return 0;
}