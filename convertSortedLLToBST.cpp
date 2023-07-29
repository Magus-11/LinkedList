#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* solve(vector<int> v, int left, int right)
{
	if(left > right)
		return NULL;
	int mid = (left + right) / 2;
	TreeNode* root = new TreeNode(v[mid]);
	root->left = solve(v, left, mid - 1);
	root->right = solve(v, mid + 1, right);
	return root;
}

TreeNode* sortedListToBST(ListNode* head)
{
	vector<int> v;
	ListNode* curr = head;
	while(curr)
	{
		v.push_back(curr->val);
		curr= curr->next;
	}
    return solve(v, 0, v.size() - 1);
}

int main()
{
	ListNode* head = new ListNode(-10);
	ListNode* curr = head;
	curr->next = new ListNode(-3);
	curr = curr->next;
	curr->next = new ListNode(0);
	curr = curr->next;
	curr->next = new ListNode(5);
	curr = curr->next;
	curr->next = new ListNode(9);
	curr = curr->next;
	TreeNode *ans = sortedListToBST(head);
	return 0;
}