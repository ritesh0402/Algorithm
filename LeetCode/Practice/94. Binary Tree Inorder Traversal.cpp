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
// class Solution
// {
// public:
//    vector<int> inorderTraversal(TreeNode *root)
//    {
//       vector<int> ans;
//       inorder(root, ans);
//       return ans;
//    }
//    void inorder(TreeNode *root, vector<int> &ans)
//    {
//       if (!root)
//          return;
//       inorder(root->left, ans);
//       ans.push_back(root->val);
//       inorder(root->right, ans);
//    }
// };

class Solution
{
public:
   vector<int> inorderTraversal(TreeNode *root)
   {
      if (!root)
         return {};
      vector<int> ans;
      stack<TreeNode *> st;
      while (true)
      {
         if (root)
         {
            st.push(root);
            root = root->left;
         }
         else
         {
            if (st.empty())
               break;
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            root = root->right;
         }
      }
      return ans;
   }
};

////////////////////  Morris traversal

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
   vector<int> inorderTraversal(TreeNode *root)
   {
      if (!root)
         return {};
      vector<int> inorder;
      TreeNode *curr = root, *pre;
      while (curr)
      {
         if (curr->left)
         {
            pre = curr->left;
            while (pre->right && pre->right != curr)
            {
               pre = pre->right;
            }
            if (pre->right)
            {
               pre->right = NULL;
               inorder.push_back(curr->val);
               curr = curr->right;
            }
            else
            {
               pre->right = curr;
               curr = curr->left;
            }
         }
         else
         {
            inorder.push_back(curr->val);
            curr = curr->right;
         }
      }
      return inorder;
   }
};