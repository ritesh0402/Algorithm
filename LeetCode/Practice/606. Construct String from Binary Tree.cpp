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
   string tree2str(TreeNode *root)
   {
      string str;
      preOrder(root, &str);
      return str;
   }
   void preOrder(TreeNode *root, string *str)
   {
      if (!root)
         return;
      *str += to_string(root->val);
      if (root->left)
      {
         *str += "(";
         preOrder(root->left, str);
         *str += ")";
      }
      else if (root->left == NULL && root->right)
      {
         *str += "()";
      }
      if (root->right)
      {
         *str += "(";
         preOrder(root->right, str);
         *str += ")";
      }
   }
};