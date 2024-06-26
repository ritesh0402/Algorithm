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
   int sumNumbers(TreeNode *root)
   {
      int sum = 0;
      helper(0, sum, root);
      return sum;
   }

   void helper(int num, int &sum, TreeNode *root)
   {
      if (!root)
         return;
      num *= 10;
      num += root->val;
      if (!root->left && !root->right)
      {
         sum += num;
         return;
      }
      helper(num, sum, root->left);
      helper(num, sum, root->right);
   }
};