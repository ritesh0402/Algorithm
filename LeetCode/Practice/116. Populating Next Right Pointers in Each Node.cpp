/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
   Node *connect(Node *root)
   {
      if (!root)
         return NULL;
      Node *node;
      queue<Node *> q;
      q.push(root);
      while (!q.empty())
      {
         Node *prev = NULL;
         int n = q.size();
         for (int i = 0; i < n; i++)
         {
            node = q.front();
            q.pop();
            if (prev)
               prev->next = node;
            prev = node;
            if (node->left)
               q.push(node->left);
            if (node->right)
               q.push(node->right);
         }
      }

      return root;
   }
};

class Solution
{
public:
   Node *connect(Node *root)
   {
      if (!root)
         return root;
      int n;
      queue<Node *> q;
      Node *node = root;
      q.push(node);
      while (!q.empty())
      {
         n = q.size();
         for (int i = 0; i < n; i++)
         {
            if (i > 0)
               node->next = q.front();
            node = q.front();
            q.pop();
            if (node->left)
               q.push(node->left);
            if (node->right)
               q.push(node->right);
         }
      }
      return root;
   }
};