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
   bool isUnivalTree(TreeNode *root)
   {
      if (!root)
         return false;
      return helper(root->val, root);
   }

   bool helper(int val, TreeNode *node)
   {
      if (!node)
         return true;
      if (node->val == val)
         return helper(node->val, node->left) && helper(node->val, node->right);
      return false;
   }
};