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
      int path = 0, ans = 0;
      helper(root, path, ans);
      return ans;
   }

   void helper(TreeNode *node, int &path, int &ans)
   {
      if (!node)
         return;

      path *= 10;
      path += node->val;

      if (!node->left && !node->right)
      {
         // cout << path << endl;
         ans += path;
         path /= 10;
         return;
      }

      helper(node->left, path, ans);
      helper(node->right, path, ans);
      path /= 10;
   }
};