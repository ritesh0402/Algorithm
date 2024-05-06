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
   void flatten(TreeNode *root)
   {
      if (!root)
         return;
      stack<TreeNode *> st;
      st.push(root);
      while (!st.empty())
      {
         root = st.top();
         st.pop();
         if (root->right)
            st.push(root->right);
         if (root->left)
            st.push(root->left);
         root->left = NULL;
         if (!st.empty())
            root->right = st.top();
      }
   }
};

class Solution
{
public:
   void flatten(TreeNode *root)
   {
      TreeNode *curr = root, *prev;
      while (curr)
      {
         if (curr->left)
         {
            prev = curr->left;
            while (prev->right)
            {
               prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
         }
         curr = curr->right;
      }
   }
};