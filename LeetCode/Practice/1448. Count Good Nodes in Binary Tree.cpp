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
   int goodNodes(TreeNode *root)
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      return helper(root->val, root);
   }

   int helper(int maxV, TreeNode *node)
   {
      if (!node)
         return 0;
      int count = 0;
      if (node->val >= maxV)
      {
         maxV = node->val;
         count++;
      }
      return count + helper(maxV, node->left) + helper(maxV, node->right);
   }
};