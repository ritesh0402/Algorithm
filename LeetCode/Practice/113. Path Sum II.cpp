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
   vector<vector<int>> pathSum(TreeNode *root, int targetSum)
   {
      vector<vector<int>> ans;
      vector<int> path;
      helper(root, targetSum, path, ans);
      return ans;
   }

   void helper(TreeNode *node, int sum, vector<int> &path, vector<vector<int>> &ans)
   {
      if (!node)
         return;
      sum -= node->val;
      path.push_back(node->val);
      if (sum == 0 && !node->left && !node->right)
      {
         ans.push_back(path);
         path.pop_back();
         return;
      }

      helper(node->left, sum, path, ans);
      helper(node->right, sum, path, ans);
      path.pop_back();
   }
};