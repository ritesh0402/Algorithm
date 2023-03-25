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
   int ans = 0;
   int sumNumbers(TreeNode *root)
   {
      r2lSum(root, 0);
      return ans;
   }

   void r2lSum(TreeNode *root, int sum)
   {
      sum *= 10;
      sum += root->val;
      if (!root->left && !root->right)
      {
         ans += sum;
      }
      if (root->left)
         r2lSum(root->left, sum);
      if (root->right)
         r2lSum(root->right, sum);
   }
};