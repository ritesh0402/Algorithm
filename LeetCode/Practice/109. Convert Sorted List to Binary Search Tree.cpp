/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
   TreeNode *sortedListToBST(ListNode *head)
   {
      TreeNode *root = makeTree(head);
      return root;
   }

   TreeNode *makeTree(ListNode *list)
   {
      if (!list)
         return NULL;
      if (!list->next)
         return new TreeNode(list->val);
      ListNode *slow = list, *fast = list->next->next;
      while (fast && fast->next)
      {
         slow = slow->next;
         fast = fast->next->next;
      }
      TreeNode *node = new TreeNode(slow->next->val);
      node->right = makeTree(slow->next->next);
      slow->next = NULL;
      node->left = makeTree(list);
      return node;
   }
};