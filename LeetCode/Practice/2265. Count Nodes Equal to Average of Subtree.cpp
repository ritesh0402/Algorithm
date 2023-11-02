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
   int averageOfSubtree(TreeNode *root)
   {
      int ans = 0;
      helper(ans, root);
      return ans;
   }

   pair<int, int> helper(int &ans, TreeNode *node)
   {
      if (!node)
         return {0, 0};
      int sum = node->val, n = 1;
      pair<int, int> l, r;
      l = helper(ans, node->left);
      r = helper(ans, node->right);
      sum += r.first + l.first;
      n += r.second + l.second;
      if (node->val == (sum) / n)
      {
         ans++;
         cout << node->val << " " << sum / n << endl;
      }
      return {sum, n};
   }
};