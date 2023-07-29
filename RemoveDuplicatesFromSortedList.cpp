#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeElement(ListNode* head)
{
	ListNode* dummy = new ListNode(-1);
	dummy->next = head;
	ListNode* prevNode = dummy;
	ListNode* currNode = head;
	ListNode* nextNode = NULL;
	if(head and head->next)
	{
		nextNode = head->next;
	}
	bool flag = false;
	while(nextNode)
	{
		if(currNode->val == nextNode->val)
		{
			currNode->next = nextNode->next;
			nextNode = nextNode->next;
			flag = true;
		}
		else if(currNode->val != nextNode->val and flag)
		{
			prevNode->next = currNode->next;
			currNode = currNode->next;
			nextNode = nextNode->next;
			flag = false;
		}
		else
		{
			prevNode = prevNode->next;
			currNode = currNode->next;
			nextNode = nextNode->next;
		}
	}
	head = dummy->next;
	return head;
}
int main()
{
	ListNode* head = new ListNode(1);
	ListNode* curr = head;
	curr->next = new ListNode(1);
	curr = curr->next;
	curr->next = new ListNode(1);
	ListNode *l = curr;
	curr = curr->next;
	curr->next = new ListNode(2);
	curr = curr->next;
	curr->next = new ListNode(3);
	curr = curr->next;
	curr->next = new ListNode(4);
	curr = curr->next;
	head = removeElement(head);
	while(head)
	{
		cout<<head->val<<endl;
		head = head->next;
	}
	return 0;
}