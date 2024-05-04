/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
   vector<vector<int>> levelOrder(Node *root)
   {
      if (!root)
         return {};
      vector<vector<int>> ans;
      queue<Node *> q;
      q.push(root);
      while (!q.empty())
      {
         vector<int> level;
         int n = q.size();
         Node *node;
         for (int i = 0; i < n; i++)
         {
            node = q.front();
            q.pop();
            level.push_back(node->val);
            for (int j = 0; j < node->children.size(); j++)
            {
               q.push(node->children[j]);
            }
         }
         ans.push_back(level);
      }
      return ans;
   }
};
