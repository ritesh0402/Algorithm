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
   vector<int> largestValues(TreeNode *root)
   {
      if (!root)
         return {};
      vector<int> ans;
      queue<TreeNode *> q;
      TreeNode *node;
      q.push(root);
      while (!q.empty())
      {
         int n = q.size();
         int maxV = INT_MIN;
         for (int i = 0; i < n; i++)
         {
            node = q.front();
            q.pop();
            maxV = max(maxV, node->val);
            if (node->left)
               q.push(node->left);
            if (node->right)
               q.push(node->right);
         }
         ans.push_back(maxV);
      }
      return ans;
   }
};