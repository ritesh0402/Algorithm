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
   bool isSubPath(ListNode *head, TreeNode *root)
   {
      if (!head || !root)
         return false;
      if (helper(head, root))
         return true;
      return isSubPath(head, root->left) || isSubPath(head, root->right);
   }

   bool helper(ListNode *llNode, TreeNode *tNode)
   {
      if (llNode && !tNode)
         return false;
      if (!llNode)
         return true;
      return (llNode->val == tNode->val) && (helper(llNode->next, tNode->left) || helper(llNode->next, tNode->right));
   }
};