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
   vector<int> arr;
   int minDiffInBST(TreeNode *root)
   {
      inorder(root);
      int ans = abs(arr[1] - arr[0]);
      for (int i = 1; i < arr.size() - 1; i++)
      {
         ans = min(ans, arr[i + 1] - arr[i]);
      }
      return ans;
   }

   void inorder(TreeNode *root)
   {
      if (!root)
         return;
      if (root->left)
         inorder(root->left);
      arr.push_back(root->val);
      if (root->right)
         inorder(root->right);
   }
};