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
   TreeNode *removeLeafNodes(TreeNode *node, int target)
   {
      if (!node)
         return NULL;
      node->left = removeLeafNodes(node->left, target);
      node->right = removeLeafNodes(node->right, target);
      if (!node->left && !node->right && node->val == target)
      {
         return NULL;
      }
      return node;
   }
};