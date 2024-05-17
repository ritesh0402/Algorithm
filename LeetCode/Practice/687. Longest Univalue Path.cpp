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
   int longestUnivaluePath(TreeNode *root)
   {
      int maxLen = 0;
      helper(maxLen, root);
      return maxLen;
   }

   int helper(int &maxLen, TreeNode *node)
   {
      if (!node)
         return 0;

      int l = helper(maxLen, node->left);
      int r = helper(maxLen, node->right);

      if (!node->left || node->val != node->left->val)
         l = 0;
      if (!node->right || node->val != node->right->val)
         r = 0;

      maxLen = max(maxLen, l + r);
      return max(l, r) + 1;
   }
};