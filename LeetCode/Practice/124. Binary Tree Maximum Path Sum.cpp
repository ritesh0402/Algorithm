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
   int maxPathSum(TreeNode *root)
   {
      int maxSum = INT_MIN;
      helper(maxSum, root);
      return maxSum;
   }

   int helper(int &maxSum, TreeNode *root)
   {
      if (!root)
         return 0;
      int ls = max(helper(maxSum, root->left), 0);
      int rs = max(helper(maxSum, root->right), 0);
      maxSum = max(maxSum, ls + rs + root->val);
      return max(ls, rs) + root->val;
   }
};