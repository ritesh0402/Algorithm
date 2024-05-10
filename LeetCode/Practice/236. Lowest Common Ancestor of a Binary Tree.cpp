/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
   TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
   {
      return helper(root, p, q);
   }

   TreeNode *helper(TreeNode *node, TreeNode *p, TreeNode *q)
   {
      if (!node || node == p || node == q)
         return node;
      TreeNode *left = helper(node->left, p, q);
      TreeNode *right = helper(node->right, p, q);
      if (!left)
         return right;
      else if (!right)
         return left;
      return node;
   }
};

class Solution
{
public:
   TreeNode *lowestCommonAncestor(TreeNode *node, TreeNode *p, TreeNode *q)
   {
      if (!node || node == p || node == q)
         return node;
      TreeNode *l = lowestCommonAncestor(node->left, p, q);
      TreeNode *r = lowestCommonAncestor(node->right, p, q);
      return l && r ? node : l ? l
                         : r   ? r
                               : NULL;
   }
};