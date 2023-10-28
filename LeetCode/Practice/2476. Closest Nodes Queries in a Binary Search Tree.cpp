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
   vector<vector<int>> closestNodes(TreeNode *root, vector<int> &queries)
   {
      vector<vector<int>> ans;
      vector<int> arr;
      // inorder traversal
      stack<TreeNode *> st;
      TreeNode *node = root;
      while (node || !st.empty())
      {
         while (node)
         {
            st.push(node);
            node = node->left;
         }
         node = st.top();
         st.pop();
         arr.push_back(node->val);
         node = node->right;
      }

      int n = arr.size();

      for (int &x : queries)
      {
         int min = -1, max = -1;
         int l = 0, h = arr.size() - 1;
         while (l <= h)
         {
            int m = l + (h - l) / 2;
            if (arr[m] == x)
            {
               max = min = x;
               break;
            }
            if (arr[m] > x)
            {
               max = arr[m];
               h = m - 1;
            }
            else
            {
               min = arr[m];
               l = m + 1;
            }
         }
         ans.push_back({min, max});
      }
      return ans;
   }
};