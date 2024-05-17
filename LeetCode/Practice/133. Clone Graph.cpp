/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
   Node *cloneGraph(Node *node)
   {
      if (!node)
         return NULL;
      unordered_map<Node *, Node *> cloned;
      return dfs(node, cloned);
      // return bfs(node);
   }

   Node *dfs(Node *node, unordered_map<Node *, Node *> &cloned)
   {
      if (cloned.find(node) != cloned.end())
      {
         return cloned[node];
      }
      Node *newNode = new Node(node->val);
      cloned[node] = newNode;
      for (auto &x : node->neighbors)
      {
         newNode->neighbors.push_back(dfs(x, cloned));
      }
      return newNode;
   }

   Node *bfs(Node *node)
   {
      if (!node)
         return NULL;
      unordered_map<Node *, Node *> cloned;
      Node *newGraph = new Node(node->val), *curr;
      cloned[node] = newGraph;
      queue<Node *> q;
      q.push(node);
      while (!q.empty())
      {
         curr = q.front();
         q.pop();
         for (Node *x : curr->neighbors)
         {
            if (cloned.find(x) == cloned.end())
            {
               cloned[x] = new Node(x->val);
               q.push(x);
            }
            cloned[curr]->neighbors.push_back(cloned[x]);
         }
      }
      return newGraph;
   }
};