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
   int sumOfLeftLeaves(TreeNode *root)
   {
      if (!root)
         return 0;
      return helper(false, root);
   }

   int helper(bool isLeft, TreeNode *node)
   {
      if (!node)
         return 0;
      if (!node->left && !node->right)
         return isLeft ? node->val : 0;
      return helper(true, node->left) + helper(false, node->right);
   }
};