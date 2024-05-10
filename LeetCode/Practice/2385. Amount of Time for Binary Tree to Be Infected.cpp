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
   TreeNode *whoesYourDaddy(int start, TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      TreeNode *first, *node;
      stack<TreeNode *> st;
      st.push(root);
      while (!st.empty())
      {
         node = st.top();
         st.pop();
         if (node->val == start)
            first = node;
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
      return first;
   }

   int burnTree(TreeNode *start, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      queue<TreeNode *> q;
      unordered_map<TreeNode *, bool> vis;
      vis[start] = true;
      q.push(start);
      int maxT = 0;
      TreeNode *node;
      while (!q.empty())
      {
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
         cout << endl;
         if (flag)
            maxT++;
      }
      return maxT;
   }

   int amountOfTime(TreeNode *root, int start)
   {
      unordered_map<TreeNode *, TreeNode *> parent;
      TreeNode *first = whoesYourDaddy(start, root, parent);
      int time = burnTree(first, parent);
      return time;
   }
};

///////////////////////////////  Alternate Solution

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
   int amountOfTime(TreeNode *root, int start)
   {
      unordered_map<TreeNode *, TreeNode *> parent;
      root = markParent(start, root, parent);
      return findTime(root, parent);
   }

   TreeNode *markParent(int start, TreeNode *node, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      TreeNode *target = NULL;
      queue<TreeNode *> q;
      q.push(node);
      while (!q.empty())
      {
         node = q.front();
         q.pop();
         if (node->val == start)
            target = node;
         if (node->left)
         {
            q.push(node->left);
            parent[node->left] = node;
         }
         if (node->right)
         {
            q.push(node->right);
            parent[node->right] = node;
         }
      }
      return target;
   }

   int findTime(TreeNode *target, unordered_map<TreeNode *, TreeNode *> &parent)
   {
      int n, maxTime = -1;
      unordered_map<TreeNode *, bool> visited;
      queue<TreeNode *> q;
      q.push(target);
      visited[target] = true;
      while (!q.empty())
      {
         n = q.size();
         maxTime++;
         for (int i = 0; i < n; i++)
         {
            target = q.front();
            q.pop();
            if (target->left && !visited[target->left])
            {
               q.push(target->left);
               visited[target->left] = true;
            }
            if (target->right && !visited[target->right])
            {
               q.push(target->right);
               visited[target->right] = true;
            }
            if (parent[target] && !visited[parent[target]])
            {
               q.push(parent[target]);
               visited[parent[target]] = true;
            }
         }
      }
      return maxTime;
   }
};