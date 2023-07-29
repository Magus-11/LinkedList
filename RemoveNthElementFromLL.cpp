#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* RemoveNth(ListNode* head)
{
	ListNode* dummy = new ListNode(-1);
	dummy->next = head;
	ListNode* prevNode = dummy;
	ListNode* currNode = head;
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
	ListNode head = RemoveCycle(head);
	while(head)
	{
		cout<<head->val<<endl;
		head = head->next;
	}
 	return 0;
}