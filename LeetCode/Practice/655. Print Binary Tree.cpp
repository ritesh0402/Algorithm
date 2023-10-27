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
   int findHeight(TreeNode *root)
   {
      if (!root)
         return 0;
      return 1 + max(findHeight(root->left), findHeight(root->right));
   }

   void insertNode(int ind, int l, int r, TreeNode *node, vector<vector<string>> &ans)
   {
      if (!node)
         return;
      int mid = l + (r - l) / 2;
      ans[ind][mid] = to_string(node->val);
      insertNode(ind + 1, l, mid - 1, node->left, ans);
      insertNode(ind + 1, mid + 1, r, node->right, ans);
   }

   vector<vector<string>> printTree(TreeNode *root)
   {
      int height = findHeight(root);
      int n = height;
      int m = pow(2, n) - 1;
      vector<vector<string>> ans(n, vector<string>(m, ""));
      insertNode(0, 0, m - 1, root, ans);
      return ans;
   }
};