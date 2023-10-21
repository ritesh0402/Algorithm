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
   void whoesYourDaddy(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      TreeNode *node;
      stack<TreeNode *> st;
      st.push(root);
      while (!st.empty())
      {
         node = st.top();
         st.pop();
         if (node->left)
         {
            parent[node->left] = node;
            st.push(node->left);
         }
         if (node->right)
         {
            parent[node->right] = node;
            st.push(node->right);
         }
      }
      return;
   }

   void levelK(TreeNode *start, int k, vector<int> &ans, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      queue<TreeNode *> q;
      unordered_map<TreeNode *, bool> vis;
      vis[start] = true;
      q.push(start);
      int level = 0;
      TreeNode *node;
      while (!q.empty())
      {
         if (level == k)
         {
            while (!q.empty())
            {
               ans.push_back(q.front()->val);
               q.pop();
            }
            return;
         }
         int size = q.size();
         bool flag = 0;
         for (int i = 0; i < size; i++)
         {
            node = q.front();
            // cout << node->val << " ";
            q.pop();
            if (node->left && !vis[node->left])
            {
               flag = 1;
               vis[node->left] = true;
               q.push(node->left);
            }
            if (node->right && !vis[node->right])
            {
               flag = 1;
               vis[node->right] = true;
               q.push(node->right);
            }
            if (parent[node] && !vis[parent[node]])
            {
               flag = 1;
               vis[parent[node]] = true;
               q.push(parent[node]);
            }
         }
         // cout << endl;
         if (flag)
            level++;
      }
      return;
   }

   vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
   {
      unordered_map<TreeNode *, TreeNode *> parent;
      vector<int> ans;
      whoesYourDaddy(root, parent);
      levelK(target, k, ans, parent);
      return ans;
   }
};