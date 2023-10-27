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
   TreeNode *pruneTree(TreeNode *root)
   {
      if (!helper(root))
      {
         return NULL;
      }
      return root;
   }

   bool helper(TreeNode *node)
   {
      if (!node)
         return false;
      bool l = helper(node->left);
      if (!l)
         node->left = NULL;
      bool r = helper(node->right);
      if (!r)
         node->right = NULL;
      return node->val == 1 || l || r;
   }
};