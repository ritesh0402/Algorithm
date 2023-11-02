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
   vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
   {
      vector<TreeNode *> ans;
      unordered_map<string, int> mp;
      helper(root, mp, ans);
      return ans;
   }

   string helper(TreeNode *node, unordered_map<string, int> &mp, vector<TreeNode *> &ans)
   {
      if (!node)
         return "#";
      string str = "(" + helper(node->left, mp, ans) + to_string(node->val) + helper(node->right, mp, ans) + ")";
      if (mp[str] == 1)
         ans.push_back(node);
      mp[str]++;
      return str;
   }
};